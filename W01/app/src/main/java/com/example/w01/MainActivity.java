package com.example.w01;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void onclick_go(View v)
    {
        TextView WhereText = findViewById(R.id.textView_msg);
        String StudentNumber = "B10610020";
        WhereText.setText(StudentNumber);
    }

    public void onclick_re(View v)
    {
        TextView WhereText = findViewById(R.id.textView_msg);
        String StudentNumber = "HelloWorld!!!";
        WhereText.setText(StudentNumber);
    }
}
