package com.example.e08;

import androidx.appcompat.app.AppCompatActivity;

import android.app.SearchManager;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    TextView tvID;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tvID = (TextView) findViewById(R.id.s_tvM_id);
    }

    public void callProfile(View v) {
        // Main*.java
        // 建立一個 Intent 的物件 他可以換頁
        Intent it = new Intent();
        // 將剛建立的頁面 叫 this , 放入 Profile.java 的 class
        it.setClass(this, Profile.class);
        // 2. 傳送參數
        it.putExtra("UID", tvID.getText());
        it.putExtra("Message", "123");
        // 啟動
        startActivity(it);
    }

    public void SentMail(View v) {
        Intent it = new Intent(Intent.ACTION_VIEW);
        it.setData(Uri.parse("mailto:b10610020@chu.edu.tw"));
        it.putExtra(Intent.EXTRA_CC, new String[]{"b10610020@g.chu.edu.tw"});
        it.putExtra(Intent.EXTRA_SUBJECT, "GOODGOOD!!!!");
        it.putExtra(Intent.EXTRA_TEXT, "hahahahahaha~~~");

        startActivity(it);
    }

    public void OpenGithub(View v) {
        Uri uri = Uri.parse("https://github.com/CHunYenc");
        Intent it = new Intent(Intent.ACTION_VIEW, uri);
        startActivity(it);
    }

    public void OpenCallPhone(View v) {
        Intent it = new Intent(Intent.ACTION_VIEW, Uri.parse("tel:800"));
        startActivity(it);
    }

    public void OpenSearch(View v) {
        Intent it = new Intent(Intent.ACTION_WEB_SEARCH);
        it.putExtra(SearchManager.QUERY,"陳雋諺");
        startActivity(it);
    }
    public void OpenMap(View v) {
        Intent it = new Intent(Intent.ACTION_VIEW);
        it.setData(Uri.parse("geo:24.760142,120.954016"));
        startActivity(it);
    }
}
