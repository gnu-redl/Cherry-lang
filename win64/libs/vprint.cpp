

//-----------------------------
// Official lib
//-----------------------------
	
	if(vprint == true)	{
		out << "#include <iostream>" << '\n';
		out << "#include <fstream>" << '\n';
		out << "#include <sstream>" << '\n';
		vprint = false;
	}
	
	if((libs.find("vprint", 0) + 1)) { 
			
			#include "../bin/vprint/func/functions.cpp"
			#include "../bin/vprint/func/active.cpp"
			#include "../bin/vprint/io/io.cpp"
		
			#include "../bin/vprint/cmd/cmd.cpp"
			#include "../bin/vprint/voice/voice.cpp"
			#include "../bin/vprint/if/if.cpp"
			#include "../bin/vprint/for/for.cpp"
			#include "../bin/vprint/while/while.cpp"
			#include "../bin/vprint/while/do.cpp"
			#include "../bin/vprint/cin/cin.cpp"
			#include "../bin/vprint/var/string.cpp"
			#include "../bin/vprint/var/int.cpp"
			#include "../bin/vprint/var/float.cpp"
			#include "../bin/vprint/var/bool.cpp"
			#include "../bin/vprint/var/mass.cpp"
			#include "../bin/vprint/switch/switch.cpp"
			
			#include "../bin/vprint/len/len.cpp"
			#include "../bin/vprint/files/write.cpp"
			#include "../bin/vprint/files/read.cpp"
			#include "../bin/vprint/files/ffunc.cpp"
			#include "../bin/vprint/strint/comint.cpp"
			#include "../bin/vprint/strint/comstr.cpp"
			
	
	}
