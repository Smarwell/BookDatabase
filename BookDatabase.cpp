
#include<sstream>
#include "BookDatabase.h"
#include "Course.h"
#include "Section.h"
#include "Book.h"

using namespace std;

void Database::parse(string line){
	stringstream linestream(line);
	string command;
	linestream >> command;
	if(command == "B"){
		
	} else if(command == "D"){
		
	} else if(command == "M"){
		
	} else if(command == "C"){
		
	} else if(command == "A"){
		
	} else if(command == "GC"){
		
	} else if(command == "GS"){
		
	} else if(command == "GB"){
		
	} else if(command == "PB"){
		
	} else if(command == "PC"){
		
	} else if(command == "PY"){
		
	} else if(command == "PD"){
		
	} else if(command == "PM"){
		
	} else {
		cout << "Fuck.\n";
	}
}

int main() {
	Database();
	return 0;
}