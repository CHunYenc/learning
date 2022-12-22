# 107-2_Java
只傳期末作業 , 一個簡易的視窗登入 JFrame+ MYSQL

## 開發環境

| 開發程式  (IDE)                      | 版本      | 是否要付費  |
| ------------------------------------|:---------:| ----------:|
| Netbeans IDE                        | 8.2       |    N       |
| MySQL Community Server  (測試)      | 8.0.16    |    N       |
| Azure Database for MySQL (報告)     | 5.7       |    Y       |
| XAMPP     (測試)                    | 3.2.3     |    N       |
| Icon8                               | 7.2.0     |    N       |

    ※※※※※
    這邊已將程式碼改為測試，使用 Localhost 或 127.0.0.1 
    詳情可以看 LoginJFrame\src\swing\DBConnection.java 這個檔案
    
    此為單純視窗與資料庫連線，無考慮資安的部分

## 開發圖

    直接從 PPT 抓下來 xD 看不懂的話不好意思
![alt 文字](https://i.imgur.com/2StRvVv.png "開發圖")


## Use
下載後此專案後直接使用 Netbeans 開啟資料夾 LoginJFrame，直接點選上方的綠色開始箭頭(F6)即可

    1.安裝 JDBC 。若下載專案的話有附上壓縮檔及已經解壓縮的
    2.設定 Localhost MySQL 
    
    CREATE table tuser(
    id int not null auto_increment primary key,
    Username char(20) not null,
    Password char(20) not null,
    Gender char(10) not null
    );
    
    再前往 DBConnection 文件進行設定。
## 程式畫面
![alt 文字](https://i.imgur.com/RBs8c9g.png "介面-1")
![alt 文字](https://i.imgur.com/STwsSad.png "介面-2")
![alt 文字](https://i.imgur.com/jQ18rZN.png "介面-3")
## 結束    
    第一次打 Readme 感覺蠻好玩的！
    這個程式其實早就要上傳了，可是一直沒時間處理(誤)
    明明就一個資料庫要改成 Local 哈
# 謝謝你的收看
