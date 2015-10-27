#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main(int argc, char *arg[]){



	string line;
	ifstream readMyfile;

	int linenumber = 0;
	int test = 0;
	

	readMyfile.open("example.txt");

	if (readMyfile.is_open()) {		
		while (getline(readMyfile, line)) {
		//cout << line << '\n';			
			
			linenumber = std::stoi(line);
			test = test + linenumber ;
		}				
	}
	else {
		cout << "Couldn't open the file...";
	}



	return 0;
}

