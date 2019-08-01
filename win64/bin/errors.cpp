
    set<string> dict { 
	"+", "-", "*", "/", "%", "=",
	"+=", "-=", "*=", "/=", "%=",
	";", ":", "{", "}", "|", "||",
	"&", "&&", "[", "]", "1", "2",
	"3", "4", "5", "6", "7", "8",
	"9", "0", "<", ">", "<=", ">=",
	"==", "!=", "!", "->", "-", "(", ")",
	
	"Voice", "Libs", "Main", "Exit",
	"Office", "byte", "byty", "row",
	"float", "dual", "array", "Console",
	"NesFunc"
	};
   	if(error(newer,dict)) {
   		cout << "ERROR" << endl;
		return 0;	
	}

