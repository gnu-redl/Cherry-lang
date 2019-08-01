				if(newer[x] == 'G') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'i') {
							if(newer[x+3] == 'n') {
								if(newer[x+4] == 'g') {
									bool exec1 = false;
									bool exec2 = false;
									string going;
									int y = x+5;
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
										going += newer[y];
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
									
									out << "cout.width(" << going << ")" << '\n';

								}
							}
						}
					}
				}
				
				
				
				if(newer[x] == 'S') {
					if(newer[x+1] == 'p') {
						if(newer[x+2] == 'e') {
							if(newer[x+3] == 'c') {
								if(newer[x+4] == 'i') {
									if(newer[x+5] == 'f') {
										if(newer[x+6] == 'y') {
											bool exec1 = false;
											bool exec2 = false;
											string spec;
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
												spec += newer[y];
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
											
											out << "cout << showpos << " << spec << " << endl" << '\n';

										}
									}
								}
							}
						}
					}
				}



	if(newer[x] == 'S')	 {
		if(newer[x+1] == 'w') {
			if(newer[x+2] == 'a') {
				if(newer[x+3] == 'p') {
					
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string var1;
							string var2;
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
								var1 += newer[y];
								x++;
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec3 = true;
									break;
								}		 
								var2 += newer[y];
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
								    
							
							
							out << "swap(" << var1 << "," << var2 << ");" << '\n'; 
					
					
				}
			}
		}
	}


