				if(newer[x] == 'R') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 'l') {
							if(newer[x+3] == 'a') {
								if(newer[x+4] == 'y') {
									
									bool exec1 = false;
									bool exec2 = false;
									string relay;
									int y = x+5;
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
										relay += newer[y];
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
									
									    for (size_t i = 0; i < relay.length(); i++) {
									        if (relay[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (relay.compare(i, byte.length(), byte) == 0)
									                relay.replace(i, byte.length(), integ);
									    }
									    
									    
									    
									    insideQuotes = false;
									
									    for (size_t i = 0; i < relay.length(); i++) {
									        if (relay[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (relay.compare(i, byty.length(), byty) == 0)
									                relay.replace(i, byty.length(), longst);
									    }
									    
									    insideQuotes = false;
									
									    for (size_t i = 0; i < relay.length(); i++) {
									        if (relay[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (relay.compare(i, row.length(), row) == 0)
									                relay.replace(i, row.length(), stringe);
									    }
									    
									    insideQuotes = false;
									
									    for (size_t i = 0; i < relay.length(); i++) {
									        if (relay[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (relay.compare(i, dual.length(), dual) == 0)
									                relay.replace(i, dual.length(), doublee);
									    }
									
									
									out << "switch(" << relay << ")" << '\n';
									
									
								}
							}
						}
					}
				}
	
if(newer[x] == 'b') {
	if(newer[x+1] == 'o') {
		if(newer[x+2] == 'x') {
				
				bool point = false;
				string cases;
				int y = x+3;
				for(;y<300;y++) {
					if(newer[y] == ':') {
					point = true;
					break;
					}		 
					cases += newer[y];
					x++;
				}
				if(point == false) {
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
									
									    for (size_t i = 0; i < cases.length(); i++) {
									        if (cases[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (cases.compare(i, byte.length(), byte) == 0)
									                cases.replace(i, byte.length(), integ);
									    }
									    
									    
									    
									    insideQuotes = false;
									
									    for (size_t i = 0; i < cases.length(); i++) {
									        if (cases[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (cases.compare(i, byty.length(), byty) == 0)
									                cases.replace(i, byty.length(), longst);
									    }
									    
									    insideQuotes = false;
									
									    for (size_t i = 0; i < cases.length(); i++) {
									        if (cases[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (cases.compare(i, row.length(), row) == 0)
									                cases.replace(i, row.length(), stringe);
									    }
									    
									    insideQuotes = false;
									
									    for (size_t i = 0; i < cases.length(); i++) {
									        if (cases[i] == '\"')
									            insideQuotes = !insideQuotes;
									
									        if (!insideQuotes)
									            if (cases.compare(i, dual.length(), dual) == 0)
									                cases.replace(i, dual.length(), doublee);
									    }
				
				out << "case " << cases << ":" << '\n';	
			
		}
	}				
}


if(newer[x] == 'd') {
	if(newer[x+1] == 'e') {
		if(newer[x+2] == 'f') {
			if(newer[x+3] == 'a') {
				if(newer[x+4] == 'u') {
					if(newer[x+5] == 'l') {
						if(newer[x+6] == 't') {
							out << "default :" << '\n';	
						}
					}
				}
			}
		}
	}				
}
