				if(newer[x] == 'f') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'r') {
					
							bool exec1 = false;
							bool exec2 = false;
							string fore;
							int y = x+3;
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
								fore += newer[y];
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
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < fore.length(); i++) {
								        if (fore[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (fore.compare(i, byte.length(), byte) == 0)
								                fore.replace(i, byte.length(), integ);
								    }
								    
								    
								    
								    const std::string byty = "byty";
								    const std::string longst = "long long"; 
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < fore.length(); i++) {
								        if (fore[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (fore.compare(i, byty.length(), byty) == 0)
								                fore.replace(i, byty.length(), longst);
								    }
								    
								    const std::string row = "row";
								    const std::string stringe = "string"; 
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < fore.length(); i++) {
								        if (fore[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (fore.compare(i, row.length(), row) == 0)
								                fore.replace(i, row.length(), stringe);
								    }
								    
								    const std::string dual = "dual";
								    const std::string doublee = "double"; 
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < fore.length(); i++) {
								        if (fore[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (fore.compare(i, dual.length(), dual) == 0)
								                fore.replace(i, dual.length(), doublee);
								    }
									
									const std::string array = "array";
								    const std::string chare = "char"; 
								
								    insideQuotes = false;
								
								    for (size_t i = 0; i < fore.length(); i++) {
								        if (fore[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (fore.compare(i, array.length(), array) == 0)
								                fore.replace(i, array.length(), chare);
								    }	    
								    

								    
							out << "for(;" << fore << ")" << '\n';
						}
					}
				}
