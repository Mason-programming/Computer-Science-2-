#include <iostream>
#include <string>
#include "roman.h"
using namespace std;


romanType::romanType(){
    romanNum ="";
    objCounter = 0;
    num = 0;
}

romanType::romanType(string rNum){
    romanNum = rNum;
    objCounter++;
}

void romanType::setRoman(string romanString){
    romanNum = romanString;
    
}
void romanType::romanToPositiveInteger(){

    for(int i = 0; i < romanNum.length(); i++){
        num = value(romanNum[i+1]);
    }
}

int romanType::value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}

void romanType::printPositiveInteger(){
    cout << "The roman symbols" << romanNum<< "equal: " << num;
    
}




