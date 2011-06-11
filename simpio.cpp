#include <iostream>

using namespace std;


/*
 * Function: GetInteger
 * Usage: n = GetInteger();
 * ------------------------
 * GetInteger reads a line of text from standard input and scans
 * it as an integer.  The integer value is returned.  If an
 * integer cannot be scanned or if more characters follow the
 * number, the user is given a chance to retry.
 * b33tr00t: as it is now it doesn't checks wether the user input is really an integer and it doesn't give another chance to retry
 */
 
int GetInteger()
{
int n;
cout<<"(we are looking for an int here): ";
cin>>n;
return n;
}

/*
 * Function: GetLong
 * Usage: n = GetLong();
 * ---------------------
 * GetLong reads a line of text from standard input and scans
 * it into a long integer.  The long is returned.  If the 
 * number cannot be scanned or if extra characters follow it,
 * the user is given a chance to retry.
 * b33tr00t: no checking and no second chance yet
 */
 
long GetLong()
{
long n;
cout<<"(we are looking for a long here): ";
cin>>n;
return n;
}

/*
 * Function: GetReal
 * Usage: x = GetReal();
 * ---------------------
 * GetReal reads a line of text from standard input and scans
 * it as a double.  If the number cannot be scanned or if extra
 * characters follow after the number ends, the user is given
 * a chance to reenter the value.
 * b33tr00t: no checking and no second chance yet
 */

double GetReal()
{
double n;
cout<<"(we are looking for a double here): ";
cin>>n;
return n;
}

/*
 * Function: GetLine
 * Usage: s = GetLine();
 * ---------------------
 * GetLine reads a line of text from standard input and returns
 * the line as a string.  The newline character that terminates
 * the input is not stored as part of the string that is returned.
 * b33tr00t: at this stage I'm not sure about this 'neline character'.might need to revise this later
 */
 
string GetLine()
{
string returnString;
cout<<"(we are looking for a string here): ";
cin>>returnString;
return returnString;
}


