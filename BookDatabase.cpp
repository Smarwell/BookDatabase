
#include<iostream>
#include<cstdlib>
#include<string>
#include<map>
#include<vector>

using namespace std;

class Section;
class Book;

class Course {
	string id;
	string name;
	map<int, Section*> sections;
public:
	Course(string id, string name)
		:id(id), name(name){}
	
	void add_section(int section_num, Section* section){
		sections[section_num] = section;
	}
};

const bool REQUIRED = true;
const bool OPTIONAL = false;

class Section {
	Course* parent;
	int section_number;
	vector<Book*> required_books;
	vector<Book*> optional_books;
public:
	Section(Course* parent, int section_num)
		:parent(parent), section_number(section_num){}
	
	void add_book(Book* book, bool required){
		if(required){
			required_books.push_back(book);
		} else {
			optional_books.push_back(book);
		}
	}
	
	void print_books(){
		
	}
	
	vector<Book*>* get_required(){
		return &required_books;
	}
	
	vector<Book*>* get_optional(){
		return &optional_books;
	}
};


int main() {
	cout << "Fuck you\n";
	return 0;
}