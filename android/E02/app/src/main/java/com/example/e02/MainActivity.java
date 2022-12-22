package com.example.e02;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.AlertDialogLayout;

import android.app.AlertDialog;
import android.graphics.Color;
import android.os.Bundle;
import android.os.Debug;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import java.util.Random;

public class MainActivity extends AppCompatActivity {

    TextView textView;
    EditText etGreen;
    EditText etRed;
    EditText etBlue;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        textView = (TextView) findViewById(R.id.textView);
        etGreen = (EditText) findViewById(R.id.et_Green);
        etRed = (EditText) findViewById(R.id.et_Red);
        etBlue = (EditText) findViewById(R.id.et_Blue);
    }

    public void ChangeColor(View v) {
        changeColor();
    }

    public void changeColor() {
        int R = (int) Integer.parseInt(etRed.getText().toString());
        int G = (int) Integer.parseInt(etGreen.getText().toString());
        int B = (int) Integer.parseInt(etBlue.getText().toString());
        textView.setTextColor(Color.rgb(R, G, B));

    }

    public void ChangeRandomColor(View v) {
        Random();
    }

    public void Random() {
        Random x = new Random();
        int R = x.nextInt(255);
        etRed.setText(R + "");
        int G = x.nextInt(255);
        etGreen.setText(G + "");
        int B = x.nextInt(255);
        etBlue.setText(B + "");
        textView.setTextColor(Color.rgb(R, G, B));

    }

    public void RAdd5(View v) {
        int R_value = (int) Integer.parseInt(etRed.getText().toString());
        int G_value = (int) Integer.parseInt(etGreen.getText().toString());
        int B_value = (int) Integer.parseInt(etBlue.getText().toString());

        R_value += 5;
        if (R_value >= 255) {
            R_value = 255;
        }
        etRed.setText(R_value + "");
        textView.setTextColor(Color.rgb(R_value, G_value, B_value));

    }

    public void RLess5(View v) {
        int R_value = (int) Integer.parseInt(etRed.getText().toString());
        int G_value = (int) Integer.parseInt(etGreen.getText().toString());
        int B_value = (int) Integer.parseInt(etBlue.getText().toString());
        R_value -= 5;
        if (R_value <= 0) {
            R_value = 0;
        }
        etRed.setText(R_value + "");
        textView.setTextColor(Color.rgb(R_value, G_value, B_value));

    }

    public void BAdd5(View v) {
        int R_value = (int) Integer.parseInt(etRed.getText().toString());
        int G_value = (int) Integer.parseInt(etGreen.getText().toString());
        int B_value = (int) Integer.parseInt(etBlue.getText().toString());
        B_value += 5;
        if (B_value >= 255) {
            B_value = 255;
        }
        etBlue.setText(B_value + "");
        textView.setTextColor(Color.rgb(R_value, G_value, B_value));

    }

    public void BLess5(View v) {
        int R_value = (int) Integer.parseInt(etRed.getText().toString());
        int G_value = (int) Integer.parseInt(etGreen.getText().toString());
        int B_value = (int) Integer.parseInt(etBlue.getText().toString());
        B_value -= 5;
        if (B_value <= 0) {
            B_value = 0;
        }
        etBlue.setText(B_value + "");
        textView.setTextColor(Color.rgb(R_value, G_value, B_value));

    }

    public void GAdd5(View v) {
        int R_value = (int) Integer.parseInt(etRed.getText().toString());
        int G_value = (int) Integer.parseInt(etGreen.getText().toString());
        int B_value = (int) Integer.parseInt(etBlue.getText().toString());
        G_value += 5;
        if (G_value >= 255) {
            G_value = 255;
        }
        etGreen.setText(G_value + "");
        textView.setTextColor(Color.rgb(R_value, G_value, B_value));

    }

    public void GLess5(View v) {
        int R_value = (int) Integer.parseInt(etRed.getText().toString());
        int G_value = (int) Integer.parseInt(etGreen.getText().toString());
        int B_value = (int) Integer.parseInt(etBlue.getText().toString());
        G_value -= 5;
        if (G_value <= 0) {
            G_value = 0;
        }
        etGreen.setText(G_value + "");
        textView.setTextColor(Color.rgb(R_value, G_value, B_value));

    }
}
