				if(newer[x] == 'd') {
					if(newer[x+1] == 'u') {
						if(newer[x+2] == 'a') {
							if(newer[x+3] == 'l') {
									bool point = false;
									string byte;
									int y = x+4;
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
								    

								    
									out << "double " << byte << '\n';

							}
						}
					}
				}
				
				
				
				if(newer[x] == 'f') {
					if(newer[x+1] == 'l') {
						if(newer[x+2] == 'o') {
							if(newer[x+3] == 'a') {
								if(newer[x+4] == 't') {
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
								    

								    
									out << "float " << byte << '\n';
								}
							}
						}
					}
				}
