### 第九週 ```e08``` ```branch 1.2``` 使用 ``` Intent``` 製作 
- 上課教學
  - 創建 Activity 並使用 Intent 從 Main 跳至 新增的 Activity
  - 創建 Button 使用 Intent 寄送 Email
- 作業
  - 創建 Button 使用 Intent 撥打電話
  - 創建 Button 使用 Intent 打開網頁，並且前往我的 Github 首頁
  - 創建 Button 使用 Intent 搜尋網頁，直接找尋我的名字
  - 創建 Button 使用 Intent 打開地圖，可以跳出設定好的座標位置
  - [Code](app/src/main/java/com/example/e08/MainActivity.java)
    ```
    Intent it = new Intent(Intent.ACTION_VIEW);
    ...
    ..
    .
    ```