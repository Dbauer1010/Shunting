#include "StringFactory.hpp"
#include <iostream>

using namespace std;

string* StringFactory::split(string s, string delims)
{
    char* s[] = s;
    char* delim[] = delims;
    char* tempstring;
    char* main[];
    char* tempdelim;
    do
    {
      for(int i = 0; i < s[].length(); ++i)
	{
    	  tempstring = strtok(s,delim);
    	  main[i] = tempstring;
     	  tempdelim = strtok(delim, s);
     	  main[i+1] = tempdelim;
     	  delim[]->shift();
     	}
    }
}
