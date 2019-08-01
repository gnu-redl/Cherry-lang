				if(newer[x] == 'C') {
					if(newer[x+1] == 'l') {
						if(newer[x+2] == 'o') {
							if(newer[x+3] == 's') {
								if(newer[x+4] == 'e') {
									bool point = false;
									string closed;
									int y = x+5;
									for(;y<300;y++) {
										if(newer[y] == ';') {
											point = true;
											break;
										}		 
										closed += newer[y];
										x++;
									}
								    
								    if(point == false) {
								    	cout << "ERROR syntax not executed" << endl;
										return 0;
									}
								    

								    
									out << closed << ".close()" << '\n';

								}
							}
						}
					}
				}
				
