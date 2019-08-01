	if(newer[x] == 'R')	 {
		if(newer[x+1] == 'e') {
			if(newer[x+2] == 'a') {
				if(newer[x+3] == 'd') {
	
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string varread;
							string fileread;
							int y = x+5;
							for(;y<300;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ',') {
									exec2 = true;
									break;
								}		 
								varread += newer[y];
								x++;
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec3 = true;
									break;
								}		 
								fileread += newer[y];
								x++;
							}
								    
							if(exec1 == false) {
								cout << "ERROR syntax not executed" << endl;
								return 0;
							}
							if(exec2 == false) {
								cout << "ERROR syntax not executed" << endl;
								return 0;
							}
							if(exec3 == false) {
								cout << "ERROR syntax not executed" << endl;
								return 0;
							}
							out << "ifstream " << varread << "(" << fileread << ")" << '\n';
					
				}
			}
		}
	}
	
	
	
	
