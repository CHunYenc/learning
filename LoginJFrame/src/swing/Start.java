/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package swing;

/**
 *
 * @author chunyen
 */
public class Start {
    public static void main(String [] args)
    {
        Login a;
        a = new Login();
        a.setLocationRelativeTo(null); //讓視窗顯示置中
        a.setTitle("登入介面"); //視窗的標題
        a.setResizable(false); //視窗無法開到最大，不然版面會亂掉
        a.setVisible(true); //視窗顯示
    }
}
