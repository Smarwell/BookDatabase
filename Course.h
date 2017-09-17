#pragma once

#include<iostream>
#include<cstdlib>
#include<string>
#include<map>
#include<set>
#include "Section.h"

using namespace std;

class Course {
	string id;
	string name;
	map<int, Section*> sections;
public:
	Course(string id, string name);
	Section* get_section(int section_num);
	set<Book*>* get_all_books();
	void print_all_books();
};