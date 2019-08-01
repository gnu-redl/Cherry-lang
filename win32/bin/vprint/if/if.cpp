			
			
				if(newer[x] == 'i') {
					if(newer[x+1] == 'f') {
						if(newer[x+2] != '_') {
					
							bool exec1 = false;
							bool exec2 = false;
							string ifs;
							int y = x+2;
							for(;y<300;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec2 = true;
									break;
								}		 
								ifs += newer[y];
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
								    
								    
								    
							out << "if(" << ifs << ")" << '\n';
						}
					}
				}
				

	if(newer[x] == 'e')	 {
		if(newer[x+1] == 'l') {
			if(newer[x+2] == 's') {
				if(newer[x+3] == 'e') {
					if(newer[x+4] == 'i') {
						if(newer[x+5] == 'f') {
							
							bool exec1 = false;
							bool exec2 = false;
							string ifs;
							int y = x+6;
							for(;y<300;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec2 = true;
									break;
								}		 
								ifs += newer[y];
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
								    
								    
								    
							out << "else if(" << ifs << ")" << '\n';
	
							
						}
					}
				}
			}
		}
	}
	
	if(newer[x] == 'e')	 {
		if(newer[x+1] == 'l') {
			if(newer[x+2] == 's') {
				if(newer[x+3] == 'e') {
					if(newer[x+4] == ' ') {
						if(newer[x+5] == 'i') {
							if(newer[x+6] == 'f') {
							
							bool exec1 = false;
							bool exec2 = false;
							string ifs;
							int y = x+7;
							for(;y<300;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec2 = true;
									break;
								}		 
								ifs += newer[y];
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
								    
								    
								    
							out << "else if(" << ifs << ")" << '\n';
				
							
							}
						}
					}
				}
			}
		}
	}
	
	if(newer[x] == 'e') {
		if(newer[x+1] == 'l') {
			if(newer[x+2] == 's') {
				if(newer[x+3] == 'e') {
					out << "else" << '\n';
				}
			}
		}
	}
	
	
	
	
	
	if(newer[x] == 'i')	 {
		if(newer[x+1] == 'f') {
			if(newer[x+2] == '_') {
				if(newer[x+3] == 'i') {
					if(newer[x+4] == 'n') {
					
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string ifs1;
							string ifs2;
							int y = x+5;
							for(;y<300;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == '>') {
									exec2 = true;
									break;
								}		 
								ifs1 += newer[y];
								x++;
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec3 = true;
									break;
								}		 
								ifs2 += newer[y];
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
								    
							
							
							out << "if((" << ifs2 << ".find(" << ifs1 << ", 0) + 1))" << '\n'; 
					
					}
				}
			}
		}
	}
	


