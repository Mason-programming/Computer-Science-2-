#include <iostream>
#include <string>
#include "roman.h"
using namespace std;

int main() {

	romanType myNum("IV");
	romanType myNum2("VIII");
    
	myNum.romanToPositiveInteger();
	myNum.printRoman();
	myNum.printPositiveInteger();
	myNum2.romanToPositiveInteger();
	myNum2.printRoman();
	myNum2.printPositiveInteger();

	//COUNTER
	cout << endl << "No of objects: " << romanType::objCounter << endl;
	system("pause");
	return 0;
}
