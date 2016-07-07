package com.polycom.polycom.model;

import android.content.SharedPreferences;

import com.polycom.polycom.OnLoginFinishListener;

/**
 * Created by Administrator on 2016/6/13.
 */
public interface LoginModel {
    void login(String userName,String pwd,boolean checked,SharedPreferences pref,OnLoginFinishListener onLoginFinishListener);
    void getSPData(SharedPreferences pref,OnLoginFinishListener onLoginFinishListener);
}
