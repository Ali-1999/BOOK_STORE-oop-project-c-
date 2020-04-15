#include<iostream>
#include<string>
#include"BOOK_SHOP.h"
#include"BOOK.h"
using namespace std;
book_shop::book_shop() {
	bk = new book[this->size];
}
//pass the by object of book
void book_shop::add_books(book& b) {
	if (this->counter < this->size) {
		bk[this->counter] = b;
		this->counter++;
	}
	else {
		cout << "------------------NO MORE SPACE IS AVAILABLE--------------------------------------\n";
	}
}
void book_shop::show_record() {
	for (int i = 0; i < this -> counter; i++) {
		cout << "\n\t\tBOOK NAME ----------: "<<bk[i].get_bookname();
		cout << "\n\t\tAUTHOR NAME ----------: " << bk[i].author_name();
		cout << "\n\t\tAVAILABLE COPIES--------: " << bk[i].get_copies();
		cout << endl;

	}
}
void book_shop::check_avalibality() {
	string name,book;
	int i; bool r = false;
	cin.ignore();
	cout << "\n\t\t ENTER BOOK NAME : ";
	getline(cin, book);
	cout << "\n\t\tENTER AUTHOR NAME : ";
	getline(cin, name);
	for (i = 0; i <= this->counter; i++)
	{
		if (book == bk[i].get_bookname() && name == bk[i].author_name()) {
			r = true;
			break;
		}
	}
	if (r == true) {
		cout << "\n\t\t<------BOOK IS AVAILABLE------->";
		cout << "\n\t\tBOOK NAME ----------: " << bk[i].get_bookname();
		cout << "\n\t\tAUTHOR NAME ----------: " << bk[i].author_name();
		cout << "\n\t\tAVAILABLE COPIES--------: " << bk[i].get_copies();
	}
	else
	{
		cout << "\n\t\t<------BOOK IS NOT AVAILABLE------->";
	}




}
void book_shop::modified_record() {
	string name, book;
	int i; bool r = false;
	cin.ignore();
	cout << "\n\t\t ENTER BOOK NAME : ";
	getline(cin, book);
	cout << "\n\t\tENTER AUTHOR NAME : ";
	getline(cin, name);
	for (i = 0; i <= this->counter; i++)
	{
		if (book == bk[i].get_bookname() && name == bk[i].author_name()) {
			
			r = true;
			break;
			
		}
	}
	if (true) {
		cin.ignore();
		string name1, book1;
		int c;
		cout << "\n\t\t ENTER BOOK NAME : ";
		getline(cin, book1);
		cout << "\n\t\tENTER AUTHOR NAME : ";
		getline(cin, name1);
		cout << "\n\t\tENTER COPIES :";
		cin >> c;
		bk[i].set_name(book1);
		bk[i].set_author(name1);
		bk[i].set_copies(c);
		cout << "\n\t\t<------BOOK IS SUCCESSFULLY MODIFIED------->";
	}
	else
	{
		cout << "\n\t\t<------BOOK IS NOT AVAILABLE------->";
	}
}
void book_shop::delete_bookrcrd() {
	string name, book;
	int i; bool r;
	cin.ignore();
	cout << "\n\t\t ENTER BOOK NAME : ";
	getline(cin, book);
	cout << "\n\t\tENTER AUTHOR NAME : ";
	getline(cin, name);
	for (i = 0; i <= this->counter; i++)
	{
		if (book == bk[i].get_bookname() && name == bk[i].author_name()) {
			bk[i].set_name(" " );
			bk[i].set_author(" ");
			bk[i].set_copies(NULL);
			r = true;
			shift(i);
			cout << "\n\t\t<------BOOK IS DELETED ------->";
		}
	}
	
}
//shifting data of array indexies
void book_shop::shift(int i) {
	for (int j = i; j <= this->counter - 1; j++) {
		bk[j].set_name(bk[j + 1].get_bookname());
		bk[j].set_author(bk[j + 1].author_name());
		bk[j].set_copies(bk[j + 1].get_copies());
	}
	counter--;
}
void book_shop::menu() {
	cout << "\n<----------------------WELL COME IN BOOK SHOP------------------->";
	cout << "\n|1|\t\tADD BOOK      "; 
	cout << "\n|2|\t\tCHECK BOOK AVAILABLITY      ";
	cout << "\n|3|\t\tMODIFIED BOOK RECORD      ";
	cout << "\n|4|\t\tSHOW BOOKS      ";
	cout << "\n|5|\t\tDELETE BOOK RECORD     ";
	cout << "\n|6|\t\t EXIT     ";
}