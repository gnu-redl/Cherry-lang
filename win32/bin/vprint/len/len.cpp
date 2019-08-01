				if(newer[x] == 'S') {
					if(newer[x+1] == 't') {
						if(newer[x+2] == 'a') {
							if(newer[x+3] == 'r') {
								if(newer[x+4] == 't') {
									bool exec1 = false;
									bool exec2 = false;
									bool exec3 = false;
									string newvar;
									string num;
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
										newvar += newer[y];
										x++;
									}
									y+=1;
									for(;y<300;y++) {
										if(newer[y] == ')') {
											exec3 = true;
											break;
										}		 
										num += newer[y];
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
										    
									
									out << newvar << " = " << newvar << "[" << num << "]" << '\n';
									
								}
							}
						}
					}
				}
				
				
				
				if(newer[x] == 'B') {
					if(newer[x+1] == 'a') {
						if(newer[x+2] == 'c') {
							if(newer[x+3] == 'k') {
									bool exec1 = false;
									bool exec2 = false;
									bool exec3 = false;
									string newvar;
									string num;
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
										newvar += newer[y];
										x++;
									}
									y+=1;
									for(;y<300;y++) {
										if(newer[y] == ')') {
											exec3 = true;
											break;
										}		 
										num += newer[y];
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
										    
									
									out << newvar << " = " << newvar << "[" << newvar << ".size()-" << num << "]" << '\n';
									
							}
						}
					}
				}
	
	
				if(newer[x] == 'L') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 'n') {
									bool exec1 = false;
									bool exec2 = false;
									bool exec3 = false;
									string newvar;
									string oldvar;
									int y = x+3;
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
										newvar += newer[y];
										x++;
									}
									y+=1;
									for(;y<300;y++) {
										if(newer[y] == ')') {
											exec3 = true;
											break;
										}		 
										oldvar += newer[y];
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
										    
									out << "long long " << newvar << ";" << '\n';
									out << newvar << "=" << oldvar << ".length()" << '\n';
									
								}
							}
						}
				
				
	
