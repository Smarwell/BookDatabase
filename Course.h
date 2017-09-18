#pragma once

#include<iostream>
#include<cstdlib>
#include<string>
#include<map>
#include<set>

using namespace std;

class Section;
class Book;

class Course {
	friend class Section;
	string id;
	string name;
	map<int, Section*> sections;
public:
	Course(string id, string name);
	Section* get_section(int section_num);
	set<Book*>* get_all_books();
	void print_all_books();
};