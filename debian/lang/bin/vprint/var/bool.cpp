				if(newer[x] == 'b') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'o') {
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
								    

								    
									out << "bool " << byte << '\n';

							}
						}
					}
				}
