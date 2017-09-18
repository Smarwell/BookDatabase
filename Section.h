#pragma once

#include<vector>
#include<iostream>
#include<cstdlib>
#include<string>
#include "Book.h"

using namespace std;

class Course;

class Section {
	Course* parent;
	int section_num;
	vector<Book*> required_books;
	vector<Book*> optional_books;
public:
	Section(Course* parent, int section_num);	
	void add_book(Book* book, bool required);	
	void print_books();
	vector<Book*>* get_required();
	vector<Book*>* get_optional();
};
