#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main (int argc, char* argv[]){
	//std::cout << "Test" << endl;	
	
	if (argc != 3) {
		std::cout << "Incorrect number of arguments." << endl;
		return 0;
	}
	cout << argv[0] << endl;

	ifstream inFile(argv[1]);
	
	string line;

	if (inFile.is_open() && inFile.good()) cout << "File Opened!" << endl;

	while (getline(inFile, line)) {
		cout << line << endl;
	}


	inFile.close();

	return 0;
}