
#include<iostream>
#include<cstdlib>
#include<vector>
#include "Book.h"
#include "Section.h"
#include "Course.h"

using namespace std;

Section::Section(Course* parent, int section_num)
	:parent(parent), section_num(section_num){}

void Section::add_book(Book* book, bool required){
	if(required){
		required_books.push_back(book);
	} else {
		optional_books.push_back(book);
	}
}

void Section::print_books(){
	cout << "Required Books for " << parent->id << " " << section_num << ":\n";
	if(required_books.size() != 0){
		for(auto& book : required_books){
			cout << "\t" << book->get_listing();
		}
	} else {
		cout << "\tNo books are required for this section\n";
	}
	cout << "Optional Books:\n"; 
	if(optional_books.size() != 0){
		for(auto& book : optional_books){
			cout << "\t" << book->get_listing();
		}
	} else {
		cout << "\tNo books are optional for this section\n";
	}
	
}

vector<Book*>* Section::get_required(){
	return &required_books;
}

vector<Book*>* Section::get_optional(){
	return &optional_books;
}