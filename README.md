# my-laravel

## 學習紀錄

### migrations

建立 migrations, 不像 django 可以自動偵測 .. XD

> php artisan make:migration create_posts_table --create="posts"

而 Laravel 有自訂義幫我們抓取是哪個 migrate.add_column_to_table

> php artisan make:migration add_subtitle_to_posts

### models

建立 model, 讓我們可以操作 CRUD

> php artisan make:model posts

### create migrate and model

同時建立 migrate and model 檔案, 這時可以輸入下面的 code.

> php artisan make:model Book -m

這時候會發現 Laravel 已經幫我們建立好 migrations/...create_books_table.php 與 app/Models/Book.php。

接下來就是要到 migrations 資料夾更新剛剛建立的 create_books_table 檔案, 新增我們要的欄位。

### tinker 

類似 django's python manage.py shell, 可以進入後端系統.

> php artisan tinker

### INSERT INTO BY Laravel ORM

第一種方式

```shell
% php artisan tinker
>>> $data = new Book
=> App\Models\Book {#4476}

>>> $data -> title = "ryen's book."
... 以此類推, 都加入後
>>> $data -> save()
```

第二種方式

```shell
>>> $data = ["title" => "ryen's two book", "description" => "my two book.", "price" => 200];
>>> Book::create($data)
Illuminate\Database\Eloquent\MassAssignmentException with message 'Add [title] to fillable property to allow mass assignment on [App\Models\Book].'
```

這時候 Laravel 會不允許你進行大量寫入。

解決方法：到 Models, 將

### SELECT

```shell
Book::where("price", ">", 150)->get()
Book::where("price", ">", 100)->orderBy('id','desc')->get()
Book::sum('price')
Book::avg, max, min ...
```

### UPDATE

>>> 
