#pragma once
#include<iostream>
#include"BOOK.h"
#include<string>
using namespace std;
class book_shop {
private:
	int size = 15;
	int counter = 0;
	book* bk;
public:
	book_shop();
	void add_books(book& b);
	void show_record();
	void check_avalibality();
	void modified_record();
	void delete_bookrcrd();
	void menu();
	void shift(int);
};