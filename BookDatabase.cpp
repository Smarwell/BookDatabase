
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
		
	}
	
	vector<Book*>* get_optional(){
		
	}
};

class Book {
	long int isbn;
	string title;
	string author;
	string date;
	int edition;
	map<string, double> type_costs;
	vector<Section*> required_by;
};


int main() {
	cout << "Fuck you\n";
	return 0;
}