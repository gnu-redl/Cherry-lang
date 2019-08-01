				if(newer[x] == 'a') {
					if(newer[x+1] == 'r') {
						if(newer[x+2] == 'r') {
							if(newer[x+3] == 'a') {
								if(newer[x+4] == 'y') {
									bool point = false;
									string byte;
									int y = x+5;
									for(;y<300;y++) {
										if(newer[y] == ';') {
											point = true;
											break;
										}		 
										byte += newer[y];
										x++;
									}
								    
								    if(point == false) {
								    	cout << "ERROR syntax not executed" << endl;
										return 0;
									}
								    

								    
									out << " char **" << byte << " = new char* [800];" << '\n';
									out << "for (int i = 0; i < 800; i++) {" << '\n';
									out << byte << "[i] = new char [i + 1];" << '\n';
									out << "}" << '\n';
								}
							}
						}
					}
				}
				
				
				
				
				
				
				if(newer[x] == 'D') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 'l') {
							if(newer[x+3] == 'A') {
								if(newer[x+4] == 'r') {
									bool point = false;
									string byte;
									int y = x+5;
									for(;y<300;y++) {
										if(newer[y] == ';') {
											point = true;
											break;
										}		 
										byte += newer[y];
										x++;
									}
								    
								    if(point == false) {
								    	cout << "ERROR syntax not executed" << endl;
										return 0;
									}
								    

								    
									out << "for (int i = 0; i < 800; i++) {" << '\n';
									out << "delete [] " << byte << "[i];" << '\n';
									out << "}" << '\n';
								}
							}
						}
					}
				}
						
		


	if(newer[x] == 'P') {
		if(newer[x+1] == 'a') {
			if(newer[x+2] == 's') {
				if(newer[x+3] == 't') {
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							bool exec4 = false;
							string namevar;
							string stroke;
							string texte;
							int y = x+4;
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
								namevar += newer[y];
								x++;
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == '>') {
									exec3 = true;
									break;
								}		 
								stroke += newer[y];
								x++;
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec4 = true;
									break;
								}		 
								texte += newer[y];
								x++;
							}
					
					int errors = atoi(stroke.c_str());
					
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
							if(exec4 == false) {
								cout << "ERROR syntax not executed" << endl;
								return 0;
							}
					if(errors >= 800) {
						cout << "ERROR array is overloaded" << endl;
						return 0;
					}
					
					
					out << "string REDLARRAYPASTSPECIALEN = " << texte << ";" << '\n';
					out << "for(int REDLARRAYNUMMERSPECIAL =0;REDLARRAYNUMMERSPECIAL<500;REDLARRAYNUMMERSPECIAL++) {" << '\n';
					out << "if(REDLARRAYPASTSPECIALEN[REDLARRAYNUMMERSPECIAL] == \'\\0\' ) {" << '\n';
					out << "break;" << '\n';
					out << "}" << '\n';
					out << namevar << "[" << stroke << "]" << "[REDLARRAYNUMMERSPECIAL] =  REDLARRAYPASTSPECIALEN [REDLARRAYNUMMERSPECIAL];" << '\n';
					out << "}" << '\n';
					
					
					
				}
			}
		}
	}
							
											
	
