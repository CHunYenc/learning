package com.example.e01;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Color;
import android.os.Bundle;
import android.os.Debug;
import android.view.View;
import android.widget.TextView;

import org.w3c.dom.Text;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void ChangeSize(int textSize)
    {
        TextView textMsg;
        textMsg = findViewById(R.id.text_msg);
        textMsg.setTextSize(textSize);

        TextView textNum;
        textNum = (TextView) findViewById(R.id.text_num);
        textNum.setText(""+textSize);
    }

    public void reSize(View v)
    {
        ChangeSize(20);
    }

    public void addOne(View v)
    {
        TextView textnum;
        textnum = findViewById(R.id.text_num);
        String TS = textnum.getText().toString();

        int its = Integer.parseInt(TS) +1;
        ChangeSize(its);
    }

    public void LessOne(View v)
    {
        TextView textnum;
        textnum = findViewById(R.id.text_num);
        String TS = textnum.getText().toString();

        int its = Integer.parseInt(TS) -1;
        ChangeSize(its);
    }

}
