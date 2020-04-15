#pragma once
#include<iostream>
#include<string>
using namespace std;
class book {
private:
	string book_name;
	string auth_name;
	int no_of_copies;
public:
	book();
	book(string, string, int);
	void set_name(string);
	void set_author(string);
	void set_copies(int);
	string get_bookname();
	string author_name();
	int get_copies();
};