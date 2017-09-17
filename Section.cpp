
#include<iostream>
#include<cstdlib>
#include<vector>
#include "Book.h"

using namespace std;

Section::Section(int section_num)
	:section_number(section_num){}

void Section::add_book(Book* book, bool required){
	if(required){
		required_books.push_back(book);
	} else {
		optional_books.push_back(book);
	}
}

void Section::print_books(){
	implement this, dummy!;
}

vector<Book*>* get_required(){
	return &required_books;
}

vector<Book*>* get_optional(){
	return &optional_books;
}