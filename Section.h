#pragma once

#include<vector>
#include<iostream>
#include<cstdlib>
#include<string>
#include "Course.h"
#include "Book.h"

using namespace std;

class Section {
	Course* parent;
	int section_number;
	vector<Book*> required_books;
	vector<Book*> optional_books;
public:
	Section(Course* parent, int section_num);	
	void add_book(Book* book, bool required);	
	void print_books();
	vector<Book*>* get_required();
	vector<Book*>* get_optional();
};
