/* This file is a replacement for strutils.cpp
 * the functions here were created based on the header file without actually seeing the original strutils.cpp file
 * It is aimed at *nix users who want to do the Stanford course CS106B without installing win or mac
 * created by b33tr00t for the benefit of all who needs it
 */


//#ifdef _strutils_h
#include <sstream>
#include <string>
using namespace std;
/*
 * Function: IntegerToString
 * Usage: s = IntegerToString(n);
 * ------------------------------
 * This function converts an integer into the corresponding
 * string of digits.  For example, IntegerToString(123)
 * returns "123" as a string.
 */

string IntegerToString(int num)
{
 string returnString;
 stringstream ss;
 ss << num;
 returnString=ss.str();
 return returnString;
}

/*
 * Function: RealToString
 * Usage: s = RealToString(d);
 * ---------------------------
 * This function converts a floating-point number into the
 * corresponding string form.  For example, calling
 * RealToString(23.45) returns "23.45".
 */

string RealToString(double num)
{
 string returnString;
 stringstream ss;
 ss << num;
 returnString=ss.str();
 return returnString;
}

/*
 * Function: StringToInteger
 * Usage: n = StringToInteger(s);
 * ------------------------------
 * This function converts a string of digits into an integer.
 * If the string is not a legal integer or contains extraneous
 * characters, StringToInteger signals an error condition.
 * b33tr00t: didn't included the error checking part. maybe some other time
 */

int StringToInteger(string str)
{
  int returnInteger;
  istringstream ss(str);
  ss >> returnInteger;
  return returnInteger;
}

  

/*
 * Function: StringToReal
 * Usage: d = StringToReal(s);
 * ---------------------------
 * This function converts a string representing a real number
 * into its corresponding value.  If the string is not a
 * legal floating-point number or if it contains extraneous
 * characters, StringToReal signals an error condition.
 * b33tr00t: didn't included the error checking part. maybe some other time
 */

double StringToReal(string str)
{
  double returnInteger;
  istringstream ss(str);
  ss >> returnInteger;
  return returnInteger;
}

/*
 * Function: ConvertToLowerCase
 * Usage: s = ConvertToLowerCase(s);
 * ---------------------------------
 * This function returns a new string with all
 * alphabetic characters converted to lower case.
 */

string ConvertToLowerCase(string s)
{
 string lowerCase="abcdefghijklmnopqrstuvwxyz";
 string upperCase="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 size_t found;
 for (int i=0;i<s.length();i++)
  {
   found=upperCase.find(s[i]);
   if (found!=string::npos)
    {
     s.replace(i,1,lowerCase.substr(int(found),1));
    }
  }
return s;
}

/*
 * Function: ConvertToUpperCase
 * Usage: s = ConvertToUpperCase(s);
 * ---------------------------------
 * This function returns a new string with all
 * alphabetic characters converted to upper case.
 */

string ConvertToUpperCase(string s)
{
 string lowerCase="abcdefghijklmnopqrstuvwxyz";
 string upperCase="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 size_t found;
 for (int i=0;i<s.length();i++)
  {
   found=lowerCase.find(s[i]);
   if (found!=string::npos)
    {
     s.replace(i,1,upperCase.substr(int(found),1));
    }
  }
return s;
}

//#endif
