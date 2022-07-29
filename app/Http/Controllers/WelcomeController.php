<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;

class WelcomeController extends Controller
{
    public function about(): string
    {
        $name = "pika, pika, pikachu !!!";
        return view('pages/about', ['name' => $name]);
    }
}
