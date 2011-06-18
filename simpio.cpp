#include <iostream>
#include <sstream>
using namespace std;


/*
 * Function: GetLine
 * Usage: s = GetLine();
 * ---------------------
 * GetLine reads a line of text from standard input and returns
 * the line as a string.  The newline character that terminates
 * the input is not stored as part of the string that is returnd
 */
 


string GetLine()
{
  string returnString;
  while (true)
  {
    getline(cin,returnString);
    if (!cin.fail()) break;
    else
     {
       returnString="";
       cin.clear();
     }
  }	
return returnString;
}



/*
 * Function: GetInteger
 * Usage: n = GetInteger();
 * ------------------------
 * GetInteger reads a line of text from standard input and scans
 * it as an integer.  The integer value is returned.  If an
 * integer cannot be scanned or if more characters follow the
 * number, the user is given a chance to retry.
 */
 
int GetInteger()
{
  while(true)
   {
     stringstream ss;
     ss << GetLine();

     int returnResult;
     if(ss >> returnResult)
      {
        char remaining;
        if(ss >> remaining)
        cout << "Unexpected character: " << remaining << endl<< "Retry: ";
        else
        return returnResult;
      }
     else
      cout << "Please enter an integer." << endl<< "Retry: ";      
   }
}



/*
 * Function: GetLong
 * Usage: n = GetLong();
 * ---------------------
 * GetLong reads a line of text from standard input and scans
 * it into a long integer.  The long is returned.  If the 
 * number cannot be scanned or if extra characters follow it,
 * the user is given a chance to retry.
 */
 
long GetLong()
{
  while(true)
   {
     stringstream ss;
     ss << GetLine();

     long returnResult;
     if(ss >> returnResult)
      {
        char remaining;
        if(ss >> remaining)
        cout << "Unexpected character: " << remaining << endl<< "Retry: ";
        else
        return returnResult;
      }
     else
      cout << "Please enter a long." << endl<< "Retry: ";      
   }
}

/*
 * Function: GetReal
 * Usage: x = GetReal();
 * ---------------------
 * GetReal reads a line of text from standard input and scans
 * it as a double.  If the number cannot be scanned or if extra
 * characters follow after the number ends, the user is given
 * a chance to reenter the value.
 */

double GetReal()
{
  while(true)
   {
     stringstream ss;
     ss << GetLine();

     double returnResult;
     if(ss >> returnResult)
      {
        char remaining;
        if(ss >> remaining)
        cout << "Unexpected character: " << remaining << endl<< "Retry: ";
        else
        return returnResult;
      }
     else
      cout << "Please enter a double." << endl<< "Retry: ";      
   }
}


