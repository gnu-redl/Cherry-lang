
if(newer[x] == 'M') {
	if(newer[x+1] == 'a') {
		if(newer[x+2] == 'i') {
			if(newer[x+3] == 'n') {
					out << "int main(int argINT, char **argSTR)" << '\n';	
			}
		}
	}				
}

if(newer[x] == 's') {
	if(newer[x+1] == 'k') {
		if(newer[x+2] == 'i') {
			if(newer[x+3] == 'p') {
					out << "continue;" << '\n';	
			}
		}
	}				
}

if(newer[x] == 'b') {
	if(newer[x+1] == 'r') {
		if(newer[x+2] == 'e') {
			if(newer[x+3] == 'a') {
				if(newer[x+4] == 'k') {
					out << "break;" << '\n';	
				}
			}
		}
	}				
}

	if(newer[x] == 'E')	 {      					
		if(newer[x+1] == 'x') {     					
			if(newer[x+2] == 'i') {						
				if(newer[x+3] == 't') {	
	
					out << "return 0;" << '\n';
			
				}		
			}			
		}				
	}
	// Cpp line
	
			if(newer[x] == '`') {
				int y = x+1;
				string cppline;
				for(;y<300;y++) {
					if(newer[y] == ';') {
						break;
					}		 
					cppline += newer[y];
					x++;
				}
				out << cppline << '\n';
									
			}


				if(newer[x] == '{') {
					out << "{" << '\n';	
				}
				if(newer[x] == '}') {
					out << "}" << '\n';	
				}
				if(newer[x] == ';') {
					out << ";" << '\n';	
				}
				if(newer[x] == 'D') {
					if(newer[x+1] == 'i') {
						if(newer[x+2] == 'e') {
							out << "}};" << '\n';
						}
					}
				}
				
				
				if(newer[x] == 'O') {
					if(newer[x+1] == 'f') {
						if(newer[x+2] == 'f') {
							if(newer[x+3] == 'i') {
								if(newer[x+4] == 'c') {
									if(newer[x+5] == 'e') {
									bool exec1 = false;
									bool exec2 = false;
									bool exec3 = false;
									bool exec4 = false;
									
									string type;
									string arg;
									string name;
									int y = x+6;
									for(;y<300;y++) {
										if(newer[y] == ':') {
											exec1 = true;
											break;
										}		 
										type += newer[y];
										x++;
									}
									y+=1;
									for(;y<300;y++) {
										if(newer[y] == '-') {
											if(newer[y+1] == '>') {
												exec2 = true;
												break;
											}
										}		 
										name += newer[y];
										x++;
									}

									y+=1;
									for(;y<300;y++) {
										if(newer[y] == '(') {
											exec3 = true;
											break;
										}		 
										x++;
									}
									y+=1;
									for(;y<300;y++) {
										if(newer[y] == ')') {
											exec4 = true;
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
									if(exec4 == false) {
										cout << "ERROR syntax not executed" << endl;
										return 0;
									}
									
									
									bool insideQuotes = false;
									
									const std::string byte = "byte";
								    const std::string integ = "int"; 
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < type.length(); i++) {
								        if (type[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (type.compare(i, byte.length(), byte) == 0)
								                type.replace(i, byte.length(), integ);
								    }
								    
								    
								    
								    const std::string byty = "byty";
								    const std::string longst = "long long"; 
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < type.length(); i++) {
								        if (type[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (type.compare(i, byty.length(), byty) == 0)
								                type.replace(i, byty.length(), longst);
								    }
								    
								    const std::string row = "row";
								    const std::string stringe = "string"; 
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < type.length(); i++) {
								        if (type[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (type.compare(i, row.length(), row) == 0)
								                type.replace(i, row.length(), stringe);
								    }
								    
								    const std::string dual = "dual";
								    const std::string doublee = "double"; 
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < type.length(); i++) {
								        if (type[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (type.compare(i, dual.length(), dual) == 0)
								                type.replace(i, dual.length(), doublee);
								    }
								    
								    const std::string array = "array";
								    const std::string chare = "char"; 
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < type.length(); i++) {
								        if (type[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (type.compare(i, array.length(), array) == 0)
								                type.replace(i, array.length(), chare);
								    }
								    
								    
								     
								
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
								    
								    insideQuotes = false;
								
								    for (size_t i = 0; i < arg.length(); i++) {
								        if (arg[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (arg.compare(i, array.length(), array) == 0)
								                arg.replace(i, array.length(), chare);
								    }
									
									out << type << " " << name << "(" << arg << ")" << '\n';
									
								}
							}
						}
					}
				}
			}





