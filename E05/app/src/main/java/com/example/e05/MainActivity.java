package com.example.e05;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.CheckBox;
import android.widget.RadioGroup;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    RadioGroup rgClass, rgSugar, rgIce;
    TextView tvmsg;
    // bag 袋子 pm 珍珠
    CheckBox bag, pm;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        rgClass = (RadioGroup) findViewById(R.id.ClassMenu);
        rgSugar = (RadioGroup) findViewById(R.id.SugarMenu);
        rgIce = (RadioGroup) findViewById(R.id.IceMenu);
        tvmsg = (TextView) findViewById(R.id.tv_total);
        bag = (CheckBox) findViewById(R.id.takebag);
        pm = (CheckBox) findViewById(R.id.takepm);
    }


    @SuppressLint("SetTextI18n")
    public void Calculate(View v) {
        double total = 0.0;
        String Class_msg = "";
        String Sugar_msg = "";
        String Ice_msg = "";
        // 設定飲料種類
        switch (rgClass.getCheckedRadioButtonId()) {
            case R.id.rb_coffee:
                total = 40.0;
                Class_msg = "咖啡";
                break;
            case R.id.rb_redtea:
                total = 50.0;
                Class_msg = "紅茶";
                break;
            case R.id.rb_milktea:
                total = 60.0;
                Class_msg = "奶茶";
                break;
            case R.id.rb_greentea:
                total = 70.0;
                Class_msg = "綠茶";
                break;
        }
        // 設定飲料糖度
        switch (rgSugar.getCheckedRadioButtonId()) {
            case R.id.rb_normal:
                Sugar_msg = "全糖";
                break;
            case R.id.rb_half:
                Sugar_msg = "半糖";
                break;
            case R.id.rb_less:
                Sugar_msg = "少糖";
            case R.id.rb_no:
                Sugar_msg = "無糖";
                break;
        }

        // 設定飲料溫度
        switch (rgIce.getCheckedRadioButtonId()) {
            case R.id.rb_ice1:
                Ice_msg = "正常冰";
                break;
            case R.id.rb_ice2:
                Ice_msg = "微冰";
                break;
            case R.id.rb_ice3:
                Ice_msg = "去冰";
            case R.id.rb_ice4:
                Ice_msg = "熱";
                break;
        }

        // 如果加珍珠、加袋子、選珍奶 則 +1 元
        // 如果加珍珠、選珍奶 則 +0 元
        // 如果加袋子 +1 元
        // 如果加珍珠 +5 元
        // 如果兩者都加 +6 元
        // bag 袋子 pm 珍珠
        if (pm.isChecked() && rgClass.getCheckedRadioButtonId() == R.id.rb_milktea && bag.isChecked()) {
            total += 1;
        } else if (pm.isChecked() && rgClass.getCheckedRadioButtonId() == R.id.rb_milktea) {
            total += 0;
        } else if (pm.isChecked() && bag.isChecked()) {
            total += 6;
        } else if (bag.isChecked()) {
            total += 1;
        } else {
            total += 5;
        }
        tvmsg.setText(Class_msg + "+" + Sugar_msg + "+" + Ice_msg + "=" + total);
    }
}
