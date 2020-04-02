#include "StringFactory.hpp"
#include "Queue.hpp"
#include <iostream>

Queue* StringFactory::split(string s, string delims)
{
    Queue* q = s;
    Queue* delim = delims;
    Queue* tempstring;
    Queue* main;
    Queue* tempdelim;
    do
    {
      for(int i = 0; i < s[].length(); ++i)
	  {
    	  tempstring = strtok(s,delim);
    	  main->Enqueue(tempstring);
     	  tempdelim = strtok(delim, s);
     	  main->Enqueue(tempdelim + 1);
     	  delim->shift()
      }
    }
    
}
