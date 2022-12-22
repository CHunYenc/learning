/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package swing;

import com.mysql.jdbc.jdbc2.optional.MysqlDataSource;
import java.sql.Connection;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author chunyen
 */
public class DBConnection {
    private static String servername = "127.0.0.1"; //伺服器網址
    private static String username = "root"; //伺服器管理員帳號
    private static String dbname = "logindb"; //資料庫名
    private static Integer portnumber = 3306; //連接資料庫對應的接口
    private static String password = "1234"; //密碼

    public static Connection getConnection() {
        Connection cnx = null;
        MysqlDataSource datasource = new MysqlDataSource();
        datasource.setServerName(servername);
        datasource.setUser(username);
        datasource.setPassword(password);
        datasource.setDatabaseName(dbname);
        datasource.setPortNumber(portnumber);
        datasource.setUseSSL(false); //這行如果不打可能會出錯唷！
        try {
            cnx = datasource.getConnection(username, password);
        } catch (SQLException ex) {
            Logger.getLogger("Get Connection ->" + DBConnection.class.getName()).log(Level.SEVERE, null, ex);
        }
        return cnx;
    }
}
