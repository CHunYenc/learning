package com.example.e08;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class Profile extends AppCompatActivity {

    TextView tvP_ID;
    TextView tvP_Mess;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_profile);
        tvP_ID = findViewById(R.id.s_tvP_id);
        tvP_Mess = findViewById(R.id.s_tvP_Mess);

        Intent it = getIntent();
        String tUID = it.getStringExtra("UID");
        String tMess = it.getStringExtra("Message");
        tvP_ID.setText(tUID);
        tvP_Mess.setText(tMess);
    }

    public void Reback(View v){
        // 第二個頁面的 .java 檔
        // 回去主頁面
        finish();
    }
}
