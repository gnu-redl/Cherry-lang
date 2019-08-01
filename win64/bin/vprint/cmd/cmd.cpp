				if(newer[x] == 'C') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'n') {
							if(newer[x+3] == 's') {
								if(newer[x+4] == 'o') {
									if(newer[x+5] == 'l') {
										if(newer[x+6] == 'e') {
											bool exec1 = false;
											bool exec2 = false;
											string con;
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
												con += newer[y];
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
												    
												    
												    
											out << "system(" << con << ")" << '\n';
										}
									}
								}
							}
						}
					}
				}
