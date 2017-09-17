
#include<iostream>
#include<cstdlib>
#include<string>
#include<map>
#include<set>
#include "Section.h"
#include "Course.h"

using namespace std;

Course::Course(string id, string name)
	:id(id), name(name){}
	
Section* Course::get_section(int section_num){
	if(sections.count(section_num) == 0){
		sections[section_num] = new Section(this, section_num);
	}
	return sections[section_num];
}

set<Book*>* get_all_books(){
	set<Book*>* books = new set<Book*>();
	for(auto& const section : sections){
		for(auto& const book : &section.get_required()){
			books.insert(book);
		}
		for(auto& const book : &section.get_optional()){
			books.insert(book);
		}
	}
	return books;
}

void print_all_books(){
	set<Book*>* books = get_all_books();
	for(auto& const book : &books){
		cout << book.get_listing();
	}
}










