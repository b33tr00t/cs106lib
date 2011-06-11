

#ifdef _genlib_h
/*
 * Function: Error
 * Usage: Error(msg);
 * ------------------
 * Error is used to signal an error condition in a program.  It first
 * attempts to throw an ErrorException.  If that fails, it outputs the
 * error message string to the cerr stream and then exits the program
 * with a status code indicating failure.
 * b33tr00t: no idea how this error throwing is suposed to work let's see if it works with this
 */

void Error(string str)
{
 cerr<<str;
 exit(-1);
}

#endif
