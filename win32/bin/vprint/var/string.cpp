
			
				if(newer[x] == 'r') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'w') {
								bool point = false;
								string row;
								int y = x+3;
								for(;y<300;y++) {
									if(newer[y] == ';') {
										point = true;
										break;
									}		 
									row += newer[y];
									x++;
								}
								
								if(point == false) {
								    cout << "ERROR syntax not executed" << endl;
									return 0;
								}
								
								out << "string " << row << '\n';
								
						}
					}
				}
			
			
