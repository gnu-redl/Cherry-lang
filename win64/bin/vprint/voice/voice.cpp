			
			
				if(newer[x] == 'V') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'i') {
							if(newer[x+3] == 'c') {
								if(newer[x+4] == 'e') {
									bool point = false;
									string voicee;
									int y = x+5;
									for(;y<300;y++) {
										if(newer[y] == ';') {
											point = true;
											break;
										}		 
										voicee += newer[y];
										x++;
									}
								    
								    if(point == false) {
								    	cout << "ERROR syntax not executed" << endl;
										return 0;
									}
								    

								    
									out << "cout << " << voicee << " << endl" << '\n';

								}
							}
						}
					}
				}
				
