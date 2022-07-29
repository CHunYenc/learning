<?php

use Illuminate\Support\Facades\Route;

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/

Route::get('/', function () {
    return "Hello Laravel.";
});

Route::get('/cats/{id}/{name}', function ($id, $name) {
//    like python f-string
    return "<h1>My number is {$id}, my name is $name.</h1>";
});


Route::get('/about', [\App\Http\Controllers\WelcomeController::class, 'about']);
