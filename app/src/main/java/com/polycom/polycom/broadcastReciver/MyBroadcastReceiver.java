package com.polycom.polycom.broadcastReciver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.widget.Toast;

/**
 * 发送标准广播
 * Created by zsn on 2016/7/1.
 */
public class MyBroadcastReceiver extends BroadcastReceiver {
    @Override
    public void onReceive(Context context, Intent intent) {
        String data = intent.getStringExtra("data");
        Toast.makeText(context, "我的手机号码是："+data,
                Toast.LENGTH_SHORT).show();
        abortBroadcast();
    }
}
