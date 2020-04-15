#include<iostream>
#include<string>
#include"BOOK.h"
using namespace std;
book::book() {
	this->book_name = " ";
	this->auth_name = " ";
	this->no_of_copies = NULL;
}
book::book(string b_name, string au_name, int cp) {
	this->book_name = b_name;
	this->auth_name = au_name;
	this->no_of_copies = cp;
}
void book::set_name(string name) {
	this->book_name = name;
}
void book::set_author(string name) {
	this->auth_name = name;
}
void book::set_copies(int c) {
	this->no_of_copies = c;
}
string book::get_bookname() {
	return book_name;
}
string book::author_name() {
	return auth_name;
}
int book::get_copies() {
	return no_of_copies;
}