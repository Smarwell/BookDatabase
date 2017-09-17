
#include<iostream>
#include<stringstream>
#include<cstdlib>
#include<string>
#include<map>
#include<regex>
#include "Book.h"

using namespace std;

Book::Book(long int isbn, string title)
	:isbn(isbn), title(title){
	author = "Unknown";
	data = "Unknown";
	edition = 0;
}

void Book::define(char characteristic, string value){	
	switch(characteristic){
		case 'A':
			author = value;
			break;
		case 'E':
			edition = stoi(value, nullptr);
			break;
		case 'D':
			smatch match;
			if(regex_match(value, match, date_regex)){
				date = value;
			} else {
				cout << "Error: invalid date entered: " << value << endl;
			}
			break;
		default:
			cout << "Error: cannot assign to characteristic '" << 
					characteristic << "'\n";
			break;
	}
}

void Book::set_cost(float cost, char version){
	if(version == 'N' || version == 'U' || version == 'R' || version == 'E'){
		type_costs[version] = cost;
	} else {
		cout << "Error: cannot assign cost to version '" << version << "'\n";
	}
}

string Book::get_listing(){
	sstream output;
	output << title;
	while(output.str().size() < 32){
		output << " ";
	}
	output << "ISBN: " << isbn << endl;
	return output.str();
}

void Book::print_info(){
	cout << "Hey, get that lazy asshole Jacob to write this function!\n";
}

float get_max_cost(){
	float max = -1;
	for(auto const& cost : type_costs){
		if(cost.second > max){
			max = cost.second;
		}
	}
	return max;
}

float get_min_cost(){
	float min = 1e29;
	for(auto const& cost : type_costs){
		if(cost.second < min){
			min = cost.second;
		}
	}
	return min;
}














