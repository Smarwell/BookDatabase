#pragma once

#include<iostream>
#include<cstdlib>
#include<string>
#include<map>
#include<vector>
#include<regex>

using namespace std;

regex date_regex("^\d\d\/\d{4}\n?$");

char version_codes[] = {'N', 'U', 'R', 'E'};
string versions[] = {"New", "Used", "Rented", "Electronic"};

class Book {
	long int isbn;
	string title;
	string author;
	string date;
	int edition;
	map<char, float> type_costs;
	
public:
	Book(long int isbn, string title);
	void define(char characteristic, string value);
	void set_cost(float cost, char version);
	string get_listing();
	void print_info();
	float get_max_cost();
	float get_min_cost();
};