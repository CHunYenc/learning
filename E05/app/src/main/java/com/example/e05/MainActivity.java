package com.example.e05;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.os.Trace;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.ImageView;
import android.widget.RadioGroup;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity implements RadioGroup.OnCheckedChangeListener {

    RadioGroup rgClass, rgSugar, rgIce;
    TextView tvmsg;
    // bag 袋子 pm 珍珠
    CheckBox bag, pm;
    ImageView img00, img01, img02, img03, img04, img05, img06, img07, img08;
    Button bt_sent;


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

        img00 = findViewById(R.id.img00_chu);
        img01 = findViewById(R.id.img01);
        img02 = findViewById(R.id.img02);
        img03 = findViewById(R.id.img03);
        img04 = findViewById(R.id.img04);
        img05 = findViewById(R.id.img05);
        img06 = findViewById(R.id.img06);
        img07 = findViewById(R.id.img07);
        img08 = findViewById(R.id.img08);


        bt_sent = findViewById(R.id.bt_sent);

        rgClass.setOnCheckedChangeListener(this);
        rgSugar.setOnCheckedChangeListener(this);
        rgIce.setOnCheckedChangeListener(this);

        Showimage(0);
    }

    public void Showimage(int imgnum) {
        img00.setVisibility(View.GONE);
        img01.setVisibility(View.GONE);
        img02.setVisibility(View.GONE);
        img03.setVisibility(View.GONE);
        img04.setVisibility(View.GONE);
        img05.setVisibility(View.GONE);
        img06.setVisibility(View.GONE);
        img07.setVisibility(View.GONE);
        img08.setVisibility(View.GONE);
        if (imgnum <= 8 && imgnum >= 0) {
            if (imgnum == 0) {
                img00.setVisibility(View.VISIBLE);
            }
            if (imgnum == 1) {
                img01.setVisibility(View.VISIBLE);
            }
            if (imgnum == 2) {
                img02.setVisibility(View.VISIBLE);
            }
            if (imgnum == 3) {
                img03.setVisibility(View.VISIBLE);
            }
            if (imgnum == 4) {
                img04.setVisibility(View.VISIBLE);
            }
            if (imgnum == 5) {
                img05.setVisibility(View.VISIBLE);
            }
            if (imgnum == 6) {
                img06.setVisibility(View.VISIBLE);
            }
            if (imgnum == 7) {
                img07.setVisibility(View.VISIBLE);
            }
            if (imgnum == 8) {
                img08.setVisibility(View.VISIBLE);
            }
        }
    }

    public void ShowMessage(String Class_msg, String Sugar_msg, String Ice_msg) {

    }

    @SuppressLint("SetTextI18n")
    public void Calculate() {
        double total = 0.0;
        String Class_msg = "";
        String Sugar_msg = "";
        String Ice_msg = "";
        // 設定飲料種類
        switch (rgClass.getCheckedRadioButtonId()) {
            case R.id.rb_coffee:
                total = 50.0;
                Class_msg = "咖啡";
                Showimage(1);
                if (rgIce.getCheckedRadioButtonId() == R.id.rb_ice4) {
                    Showimage(5);
                }
                break;
            case R.id.rb_redtea:
                total = 40.0;
                Class_msg = "紅茶";
                Showimage(2);
                if (rgIce.getCheckedRadioButtonId() == R.id.rb_ice4) {
                    Showimage(6);
                }
                break;
            case R.id.rb_milktea:
                total = 30.0;
                Class_msg = "奶茶";
                Showimage(3);
                if (rgIce.getCheckedRadioButtonId() == R.id.rb_ice4) {
                    Showimage(7);
                }
                break;
            case R.id.rb_greentea:
                total = 35.0;
                Class_msg = "綠茶";
                Showimage(4);
                if (rgIce.getCheckedRadioButtonId() == R.id.rb_ice4) {
                    Showimage(8);
                }
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
                break;
            case R.id.rb_ice4:
                Ice_msg = "熱";
                break;
        }

//        - 如果加珍珠、加袋子、選奶茶 則 +1 元
//                - 如果加珍珠、選奶茶 則 +0 元
//                - 如果兩者都加 +6 元
//                - 如果加袋子 +1 元
//                - 如果加珍珠 +5 元
//
        if (pm.isChecked() && rgClass.getCheckedRadioButtonId() == R.id.rb_milktea && bag.isChecked()) {
            total += 1;
        } else if (pm.isChecked() && rgClass.getCheckedRadioButtonId() == R.id.rb_milktea) {
            total += 0;
        } else if (pm.isChecked() && bag.isChecked()) {
            total += 6;
        } else if (bag.isChecked()) {
            total += 1;
        } else if (pm.isChecked()) {
            total += 5;
        }

        if (rgIce.getCheckedRadioButtonId() == R.id.rb_ice4 && (rgClass.getCheckedRadioButtonId() == R.id.rb_greentea || rgClass.getCheckedRadioButtonId() == R.id.rb_redtea)) {
            total = total * 0.8;
        }

        String showmsg;
        showmsg = Class_msg + "+" + Sugar_msg + "+" + Ice_msg + "=" + total;
        Mesage(showmsg);

        tvmsg.setText(showmsg);
    }

    public void Mesage(String msgtext) {
        Toast to = Toast.makeText(this, msgtext, Toast.LENGTH_SHORT);
        to.show();
    }

    @Override
    public void onCheckedChanged(RadioGroup group, int checkedId) {
        Calculate();
    }
}
