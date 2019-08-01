#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <set>

using std::string;
using namespace std;
string libs;



int main(int argc, char **argv) {

	//	LIBS BOOLEAN
	bool vprint = false;
	bool math = false;
	
	
	// GPL

	system("cls");
	
	cout << "When storing or launching CherryLang you accept the license agreement GNU GPL" << endl;
	cout << "GNU GENERAL PUBLIC LICENSE v3.0"  << endl; 
	cout << "" << endl;


	string a;
	if(argc == 1) {
			cout << "--------------------------------------------------|" << endl;
			cout << "|  ERROR: NON ARGUMENT                            |" << endl;
			cout << "--------------------------------------------------|" << endl;
			cout << "| cherry -v   -->>  version redl                  |" << endl;
			cout << "| cherry  test.rlf -->> compile file .rlf         |" << endl;
			cout << "--------------------------------------------------|" << endl;
			cout << endl;
			return 0;
	}

	string version = "-v";
	if(argv[1] == version) {
		cout << "--------------------------------" << endl;
		cout << "|                              |" << endl;
		cout << "| CherryLang 0.03 BETA for WIN |" << endl;
		cout << "|                              |" << endl;
		cout << "--------------------------------" << endl;
		cout << endl;
		return 0;
	}else {
		a = argv[1];
	}
	
	#include "bin/code.cpp"
		
		ofstream out("file.cpp");
		out << "using namespace std;" << '\n';
		
		string newer;
		for (int voice2 = 0;voice2 < strokeINT; voice2++) {
			string codest = code[voice2];


			int maxsimbhol = strokeINT * 300;
			#include "bin/treat.cpp"
		}
		
		long long line = newer.length();
			
		
		// Command start
	int x = 0;
	for(;x<line;x++) {
		#include "bin/import.cpp"
		#include "bin/return.cpp"
		#include "libs/libsadd.cpp"
		#include "bin/libscpp.cpp"
		#include "libs/vprint.cpp"
		#include "libs/math.cpp"	
	}
	
	
		
		// COMMAND END
		
		out.close();
		
		
		
	// COMPILE
		

			system("g++ file.cpp -static-libgcc -std=c++11");
			system("del file.cpp");
		
		
			
		
		
	
	return 0; 
}

