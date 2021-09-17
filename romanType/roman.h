#ifndef _ROMAN_CLASS_
#define _ROMAN_CLASS_
//Roman Num Header file

#include <string> 
using namespace std;

class romanType
{
public:
	//COUNTER
	static int objCounter;
    int value(char m);
	void setRoman(string);
	void romanToPositiveInteger();
	void printPositiveInteger();
	void printRoman();
    romanType();
    romanType(string);

private:
	string romanNum;
	int num;
};
int romanType::objCounter = 0;

#include "roman.cpp"
#endif
