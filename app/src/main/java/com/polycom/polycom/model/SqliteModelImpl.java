package com.polycom.polycom.model;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.util.Log;

import com.polycom.polycom.OnSqliteFinishListener;
import com.polycom.polycom.bean.SqlBean;

import java.util.List;

/**
 * Created by zsn on 2016/7/8.
 */
public class SqliteModelImpl implements SqliteModel {

    @Override
    public void insert(SQLiteDatabase db,String tableName,OnSqliteFinishListener onSqliteFinishListener,List<SqlBean>sqlList) {
        ContentValues values=new ContentValues();
        //  开始组装第一条数据
        for(SqlBean sqlBean:sqlList){
            db.execSQL("insert into " + tableName + " (name,author,pages,price) values (?,?,?,?)",new String[]{sqlBean.getName(),sqlBean.getAuthor(),sqlBean.getPages()+"",sqlBean.getPrice()+""});
        }
        //long result1 = db.insert(tableName, null, values);
        //values.clear();
        //  开始组装第二条数据
        values.put("name", "The Lost Symbol");
        values.put("author", "Dan Brown");
        values.put("pages", 510);
        values.put("price", 19.95);
        long result2= db.insert(tableName, null, values);
        if(result2==-1){
       // if(result1==-1||result2==-1){
            onSqliteFinishListener.onInsertError();
        }else{
            onSqliteFinishListener.onInsertSuccess();
        }
    }

    @Override
    public void update(SQLiteDatabase db, String tableName, OnSqliteFinishListener onSqliteFinishListener) {
        ContentValues values=new ContentValues();
        values.put("author","O(∩_∩)O哈哈~");
        int result = db.update(tableName, values, "pages=?", new String[]{"123"});
        db.execSQL("update "+ tableName +" set name='蘑菇',price='125' where pages='510';");
        if(result==0){
            onSqliteFinishListener.onUpdateError();
        }else{
            onSqliteFinishListener.onUpdateSuccess();
        }
    }

    @Override
    public void delete(SQLiteDatabase db, String tableName, OnSqliteFinishListener onSqliteFinishListener) {
        int result = db.delete(tableName, "pages>?", new String[]{"500"});
        //db.execSQL("delete from "+tableName+" where name=？",new String[]{"蘑菇"});
        if(result==0){
            onSqliteFinishListener.onDeleteError();
        }else{
            onSqliteFinishListener.onDeleteSuccess();
        }
    }

    @Override
    public void query(SQLiteDatabase db, String tableName, OnSqliteFinishListener onSqliteFinishListener) {
        Cursor cursor = db.query(tableName, null, null, null, null, null, null, null);
        if(cursor.moveToFirst()){
            do {
                String name = cursor.getString(cursor.getColumnIndex("name"));
                String author = cursor.getString(cursor.getColumnIndex("author"));
                String pages = cursor.getString(cursor.getColumnIndex("pages"));
                String price = cursor.getString(cursor.getColumnIndex("price"));
                Log.i("zsn","name="+name);
                Log.i("zsn","author="+author);
                Log.i("zsn","pages="+pages);
                Log.i("zsn","price="+price);

            }while (cursor.moveToNext());
        }
        cursor.close();
    }

    @Override
    public void replaceData(SQLiteDatabase db, String tableName, OnSqliteFinishListener onSqliteFinishListener) {
       //开启事务
        db.beginTransaction();
        try{
            db.delete(tableName,null,null);
            //强制抛出异常
            /*if(true){
                throw new NullPointerException();
            }*/
            db.execSQL("insert into " + tableName + " (name,author,pages,price) values (?,?,?,?)",new String[]{"保宇","老司机",125+"",24.9+""});
            db.setTransactionSuccessful();
            onSqliteFinishListener.onReplaceDataSuccess();
        }catch (Exception e){
            e.printStackTrace();
            onSqliteFinishListener.onReplaceDataError();
        }finally{
            db.endTransaction();
        }

    }
}
