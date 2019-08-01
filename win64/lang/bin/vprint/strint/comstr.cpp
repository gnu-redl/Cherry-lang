
							
							
							
							


				if(newer[x] == 'C') {
					if(newer[x+1] == 'i') {
						if(newer[x+2] == 'n') {
							if(newer[x+3] == 'R') {
								if(newer[x+4] == 'o') {
									if(newer[x+5] == 'w') {
											
										bool exec1 = false;
										bool exec2 = false;
										bool exec3 = false;
										string row;
										string byty;
										int y = x+6;
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
											row += newer[y];
											x++;
										}
										y+=1;
										for(;y<300;y++) {
											if(newer[y] == ')') {
												exec3 = true;
												break;
											}		 
											byty += newer[y];
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
											    
										
										out << "stringstream REDLCONVERTINTTOSTRINGSPECIAL;" << '\n';
										out << "REDLCONVERTINTTOSTRINGSPECIAL <<" << byty << ";" << '\n';
										out << "REDLCONVERTINTTOSTRINGSPECIAL >>" << row << ";" << '\n';
									
									}
								}
							}
						}
					}
				}
