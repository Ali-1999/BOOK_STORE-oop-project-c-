#include<iostream>
#include<string>
#include<conio.h>
#include"BOOK_SHOP.h"
#include"BOOK.h"
using namespace std;
void main(){
	int choice;
	string name, author;
	int cop;
	book bok;
	book_shop bs;
	book b("math","ali",20);
	book bk;
	bk.set_author("awais");
	bk.set_name("urdu");
	bk.set_copies(10);
	book bk1;
	bk1.set_author("awais");
	bk1.set_name("english");
	bk1.set_copies(10);
	bs.add_books(b);
	bs.add_books(bk);
	bs.add_books(bk1);
	do
	{
		bs.menu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			
			cin.ignore();
			cout << "\n\t\tENTER BOOK NAME  : ";
			getline(cin, name);
			bok.set_name(name);
			cout << "\n\t\tENTER AUTHOR NAME  : ";
			getline(cin, author);
			bok.set_author(author);
			cout << "\n\t\tENTER BOOK COPIES  : ";
			cin >> cop;
			bok.set_copies(cop);
			bs.add_books(bok);
			break;
		case 2:
			bs.check_avalibality();
			break;
		case 3:
			bs.modified_record();
			break;
		case 4:
			bs.show_record();
			break;
		case 5:
			bs.delete_bookrcrd();
			break;
		}



	} while (choice<6);
}