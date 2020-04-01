package com.example.e04;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.graphics.Color;
import android.os.Bundle;
import android.os.Vibrator;
import android.view.MotionEvent;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener, View.OnLongClickListener, View.OnTouchListener {

    Button btAdd;
    Button btLess;
    TextView tvmsg;
    Button btCenter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        btAdd = (Button) findViewById(R.id.bt_plus);
        btLess = (Button) findViewById(R.id.bt_less);
        tvmsg = (TextView) findViewById(R.id.tv_msg);
        btCenter = (Button) findViewById(R.id.bt_center);

        tvmsg.setOnClickListener(this);
        tvmsg.setOnLongClickListener(this);

        btAdd.setOnClickListener(this);
        btLess.setOnClickListener(this);

        btAdd.setOnLongClickListener(this);
        btLess.setOnLongClickListener(this);
        btCenter.setOnTouchListener(this);
    }

    @Override
    public void onClick(View v) {

        int nowNumber = Integer.parseInt(tvmsg.getText().toString());
        String nowString = tvmsg.getText().toString();
        if (v.getId() == R.id.bt_plus) {
            nowNumber++;
            tvmsg.setText(nowNumber + "");
        }
        if (v.getId() == R.id.bt_less) {
            nowNumber--;
            tvmsg.setText(nowNumber + "");
        }
        if (v.getId() == R.id.tv_msg) {
            tvmsg.setTextColor(Color.rgb(0, 0, 0));
        }
    }

    @Override
    public boolean onLongClick(View v) {
        int nowNumber = Integer.parseInt(tvmsg.getText().toString());

        if (v.getId() == R.id.bt_plus) {
            nowNumber += 5;
            tvmsg.setText(nowNumber + "");
        }
        if (v.getId() == R.id.bt_less) {
            nowNumber -= 5;
            tvmsg.setText(nowNumber + "");
        }
        if (v.getId() == R.id.tv_msg) {
            tvmsg.setTextColor(Color.rgb(255, 0, 0));
        }
        return false;
    }

    @Override
    public boolean onTouch(View v, MotionEvent event) {
        if (v.getId() == R.id.bt_center) {
            Vibrator vt = (Vibrator) getSystemService(Context.VIBRATOR_SERVICE); // 振動器
            if (event.getAction() == MotionEvent.ACTION_DOWN) {
                vt.vibrate(3000);
            }
        }
        return false;
    }
}
