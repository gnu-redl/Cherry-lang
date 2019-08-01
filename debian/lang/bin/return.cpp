				if(newer[x] == 'R') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 't') {
							if(newer[x+3] == 'u') {
								if(newer[x+4] == 'r') {
									if(newer[x+5] == 'n') {
										bool point = false;
										string ret;
										int y = x+5;
										for(;y<300;y++) {
											if(newer[y] == ';') {
												point = true;
												break;
											}		 
											ret += newer[y];
											x++;
										}
									    
									    if(point == false) {
									    	cout << "ERROR syntax not executed" << endl;
											return 0;
										}
									    
	
									    
										out << "return " << ret << '\n';

									}
								}
							}
						}
					}
				}
