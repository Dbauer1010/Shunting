#include<string.h>
#include<iostream>
using namespace std;

int main()
{
  char* s[] = "123+13-2";
  char* delim[] = "+-*/";
  char* tempstring;
  char* main[];
  char* tempdelim;
  do
  {
    tempstring = strtok(s,delim);
    main[0] = tempstring;
    tempdelim = strtok(delim, s);
    main[1] = tempdelim;
    delim[]->shift();
    tempstring = strtok(s,delim);
    main[2] = tempstring;
    tempdelim = strtok(delim, s)
    main[3] = tempdelim;
    delim[]->shift();
    tempstring = strtok(s,delim);
    main[4] = tempstring;
    
    
    
    
  }
}
