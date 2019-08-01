				if(newer[x] == 'b') {
					if(newer[x+1] == 'y') {
						if(newer[x+2] == 't') {
							if(newer[x+3] == 'e') {
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
								    

								    
									out << "int " << byte << '\n';

							}
						}
					}
				}
				
				
				
				
				
				if(newer[x] == 'b') {
					if(newer[x+1] == 'y') {
						if(newer[x+2] == 't') {
							if(newer[x+3] == 'y') {
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
								    

								    
									out << "long long " << byte << '\n';

							}
						}
					}
				}
