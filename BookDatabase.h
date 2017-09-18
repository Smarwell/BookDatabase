#pragma once

#include<cstdlib>
#include<iostream>
#include<string>
#include<sstream>
#include<map>
#include "Course.h"
#include "Section.h"
#include "Book.h"

using namespace std;

class Database{
	map<long int, Book*> books;
	map<string, Course*> courses;

public:
	void parse(string line);
};