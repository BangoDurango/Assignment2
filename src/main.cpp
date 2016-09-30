#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main (int argc, char* argv[]){
	//std::cout << "Test" << endl;	
	
	if (argc != 3) {
		std::cout << "Incorrect number of arguments." << std::endl;
		return 0;
	}
	std::cout << argv[0] << std::endl;

	ifstream inFile(argv[1]);
	
	string line;

	if (inFile.is_open() && inFile.good()) std::cout << "File Opened!" << std::endl;

	while (getline(inFile, line)) {
		std::cout << line << std::endl;
	}


	inFile.close();

	return 0;
}