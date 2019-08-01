
//-----------------------------
// Official lib
//-----------------------------

	if(math == true) {
		out << "#include <cmath>" << '\n';
		math = false;
	}
	
	if((libs.find("math", 0) + 1)) { 
	
	
	if(newer[x] == 'P')	 {
		if(newer[x+1] == 'o') {
			if(newer[x+2] == 'w') {
					
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string num;
							string mea;
							int y = x+3;
							for(;y<300;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == '^') {
									exec2 = true;
									break;
								}		 
								num += newer[y];
								x++;
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec3 = true;
									break;
								}		 
								mea += newer[y];
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
								    
							
							
							out << num << " = pow(" << num << "," << mea << ")" << '\n';
					
			}
		}
	}


				if(newer[x] == 'A') {
					if(newer[x+1] == 'b') {
						if(newer[x+2] == 'c') {
					
							bool exec1 = false;
							bool exec2 = false;
							string num;
							int y = x+3;
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
								    
								    
								    
							out << num << " = abs(" << num << ")" << '\n';
						}
					}
				}
	

		
	//------------------------------------------------------------------
		
				if(newer[x] == 'R') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 'd') {
							if(newer[x+3] == 'i') {
								if(newer[x+4] == 'x') {
									
									bool exec1 = false;
									bool exec2 = false;
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
										if(newer[y] == ')') {
											exec2 = true;
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
										    
										    
										    
									out << num << " = sqrt(" << num << ")" << '\n';
						
								}
							}
						}
					}
				}
				
				
				
				if(newer[x] == 'R') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'u') {
							if(newer[x+3] == 'n') {
								if(newer[x+4] == 'd') {
									if(newer[x+5] == 'c') {
									
										bool exec1 = false;
										bool exec2 = false;
										string num;
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
											    
											    
											    
										out << num << " = ceil(" << num << ")" << '\n';
									}
								}
							}
						}
					}
				}
				
				
				
				if(newer[x] == 'R') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'u') {
							if(newer[x+3] == 'n') {
								if(newer[x+4] == 'd') {
									if(newer[x+5] == 'f') {
									
										bool exec1 = false;
										bool exec2 = false;
										string num;
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
											    
											    
											    
										out << num << " = floor(" << num << ")" << '\n';
									}
								}
							}
						}
					}
				}
		
	
		if(newer[x] == 'R')	 {
			if(newer[x+1] == 'e') {
				if(newer[x+2] == 'i') {
					
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string num;
							string num2;
							int y = x+3;
							for(;y<300;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == '^') {
									exec2 = true;
									break;
								}		 
								num += newer[y];
								x++;
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ')') {
									exec3 = true;
									break;
								}		 
								num2 += newer[y];
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
								    
							
							
							out << num << " = fmod(" << num << "," << num2 << ")" << '\n';
					
			}
		}
	}
				
				
				
				if(newer[x] == 'E') {
					if(newer[x+1] == 'x') {
						if(newer[x+2] == 'p') {
									
										bool exec1 = false;
										bool exec2 = false;
										string num;
										int y = x+3;
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
											    
											    
											    
										out << num << " = exp(" << num << ")" << '\n';

						}
					}
				}


				if(newer[x] == 'S') {
					if(newer[x+1] == 'i') {
						if(newer[x+2] == 'n') {
									
										bool exec1 = false;
										bool exec2 = false;
										string num;
										int y = x+3;
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
											    
											    
											    
										out << num << " = sin(" << num << ")" << '\n';

						}
					}
				}
				
				
				if(newer[x] == 'C') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 's') {
									
										bool exec1 = false;
										bool exec2 = false;
										string num;
										int y = x+3;
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
											    
											    
											    
										out << num << " = cos(" << num << ")" << '\n';

						}
					}
				}

	
				
				if(newer[x] == 'L') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'g') {
									
										bool exec1 = false;
										bool exec2 = false;
										string num;
										int y = x+3;
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
											    
											    
											    
										out << num << " = log(" << num << ")" << '\n';

						}
					}
				}
				
				
				if(newer[x] == 'L') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'g') {
							if(newer[x+3] == '1') {
								if(newer[x+4] == '0') {
									
										bool exec1 = false;
										bool exec2 = false;
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
											if(newer[y] == ')') {
												exec2 = true;
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
											    
											    
											    
										out << num << " = log10(" << num << ")" << '\n';
								}
							}
						}
					}
				}


				if(newer[x] == 'A') {
					if(newer[x+1] == 's') {
						if(newer[x+2] == 'i') {
							if(newer[x+3] == 'n') {
									
										bool exec1 = false;
										bool exec2 = false;
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
											if(newer[y] == ')') {
												exec2 = true;
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
											    
											    
											    
										out << num << " = asin(" << num << ")" << '\n';

							}
						}
					}
				}

	}
		

