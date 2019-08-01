				if(newer[x] == 'N') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 's') {
							if(newer[x+3] == 'F') {
								if(newer[x+4] == 'u') {
									if(newer[x+5] == 'n') {
										if(newer[x+6] == 'c') {
											
										bool exec1 = false;
										bool exec2 = false;
										bool exec3 = false;
										
										string name;
										string arg;
										int y = x+7;
										for(;y<300;y++) {
											if(newer[y] == '-') {
												if(newer[y+1] == '>') {
													exec1 = true;
													break;
												}
											}		 
											name += newer[y];
											x++;
										}
										y+=1;
										for(;y<300;y++) {
											if(newer[y] == '(') {
												exec2 = true;
												break;
											}		 
											x++;
										}
										y+=1;
										for(;y<300;y++) {
											if(newer[y] == ')') {
												exec3 = true;
												break;
											}
											arg += newer[y];		 
											x++;
										}
										
	
								//ERROR

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
										
										
										bool insideQuotes = false;
										
										const std::string byte = "byte";
									    const std::string integ = "int"; 
									
									    const std::string byty = "byty";
									    const std::string longst = "long long"; 
					
									    const std::string row = "row";
									    const std::string stringe = "string"; 
									    
									    const std::string dual = "dual";
									    const std::string doublee = "double"; 
									    
									    
									     
									
									    insideQuotes = false;
									
									    for (size_t i = 0; i < arg.length(); i++) {
									        if (arg[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (arg.compare(i, byte.length(), byte) == 0)
									                arg.replace(i, byte.length(), integ);
									    }
									    
									    
									    
									    insideQuotes = false;
									
									    for (size_t i = 0; i < arg.length(); i++) {
									        if (arg[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (arg.compare(i, byty.length(), byty) == 0)
									                arg.replace(i, byty.length(), longst);
									    }
									    
									    insideQuotes = false;
									
									    for (size_t i = 0; i < arg.length(); i++) {
									        if (arg[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (arg.compare(i, row.length(), row) == 0)
									                arg.replace(i, row.length(), stringe);
									    }
									    
									    insideQuotes = false;
									
									    for (size_t i = 0; i < arg.length(); i++) {
									        if (arg[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (arg.compare(i, dual.length(), dual) == 0)
									                arg.replace(i, dual.length(), doublee);
									    }
										
										out << "class " << name << " {" << '\n';
										out << "public:" << '\n';
										out << name << "(" << arg << ") {" << '\n';
									
									
									}
								}
							}
						}
					}
				}
			}
