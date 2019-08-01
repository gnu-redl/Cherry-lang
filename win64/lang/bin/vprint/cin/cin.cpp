	if(newer[x] == 'G')	 {
		if(newer[x+1] == 'e') {
			if(newer[x+2] == 't') {
				if(newer[x+3] == 's') {
					if(newer[x+4] == 'S') {
						if(newer[x+5] == 't') {
							if(newer[x+6] == 'r') {
								if(newer[x+7] == 'i') {
									if(newer[x+8] == 'n') {
										if(newer[x+9] == 'g') {
							
											bool exec1 = false;
											bool exec2 = false;
											bool exec3 = false;
											string gets;
											string texts;
											int y = x+10;
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
												gets += newer[y];
												x++;
											}
											y+=1;
											for(;y<300;y++) {
												if(newer[y] == ')') {
													exec3 = true;
													break;
												}		 
												texts += newer[y];
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
												    
												    
												    
											out << "cout << " << texts << ";" << '\n';
											out << "getline(std::cin," << gets << ");" << '\n';
											
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	if(newer[x] == 'G')	 {
		if(newer[x+1] == 'e') {
			if(newer[x+2] == 't') {
				if(newer[x+3] != 's') {
											bool exec1 = false;
											bool exec2 = false;
											bool exec3 = false;
											string gets;
											string texts;
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
												gets += newer[y];
												x++;
											}
											y+=1;
											for(;y<300;y++) {
												if(newer[y] == ')') {
													exec3 = true;
													break;
												}		 
												texts += newer[y];
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
												    
												    
												    
											out << "cout << " << texts << ";" << '\n';
											out << "cin >>" << gets << '\n';
					
				}
			}
		}
	}
				
	
	
	
		if(newer[x] == 'G')	 {
		if(newer[x+1] == 'e') {
			if(newer[x+2] == 't') {
				if(newer[x+3] == 's') {
					if(newer[x+4] == 'A') {
						if(newer[x+5] == 'r') {
							if(newer[x+6] == 'r') {
								if(newer[x+7] == 'a') {
									if(newer[x+8] == 'y') {
							
											bool exec1 = false;
											bool exec2 = false;
											bool exec3 = false;
											string gets;
											string texts;
											int y = x+9;
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
												gets += newer[y];
												x++;
											}
											y+=1;
											for(;y<300;y++) {
												if(newer[y] == ')') {
													exec3 = true;
													break;
												}		 
												texts += newer[y];
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
												    
												    
												    
											out << "cout << " << texts << ";" << '\n';
											out << "cin.getline(" << gets << ", 900);" << '\n';
											
										
									}
								}
							}
						}
					}
				}
			}
		}
	}
