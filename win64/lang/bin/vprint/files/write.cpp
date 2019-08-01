	if(newer[x] == 'W')	 {
		if(newer[x+1] == 'r') {
			if(newer[x+2] == 'i') {
				if(newer[x+3] == 't') {
					if(newer[x+4] == 'e') {
						if(newer[x+5] != 'd') {
					
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string varwrite;
							string filewrite;
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
								varwrite += newer[y];
								x++;
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec3 = true;
									break;
								}		 
								filewrite += newer[y];
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
								    
							
							
							out << "ofstream " << varwrite << "(" << filewrite << ")" << '\n';
						}
					}
				}
			}
		}
	}



	if(newer[x] == 'W')	 {
		if(newer[x+1] == 'r') {
			if(newer[x+2] == 'i') {
				if(newer[x+3] == 't') {
					if(newer[x+4] == 'e') {
						if(newer[x+5] == 'd') {
					
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string varwrite;
							string texte;
							int y = x+6;
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
								varwrite += newer[y];
								x++;
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec3 = true;
									break;
								}		 
								texte += newer[y];
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
								    
							
							
							out << varwrite << " << " << texte << " << \'\\n\'" << '\n';
						}
					}
				}
			}
		}
	}
