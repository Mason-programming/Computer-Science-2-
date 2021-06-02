#include <iostream>
#include <string>
using namespace std; 

// 
struct studentType{
    string studentFName;
    string studentLName;
    int testScore;
    char grade; 
};
// declare varible of New Student as a rayy of 20 components 
studentType newStudent[20];
// declare functions 
void readStudentData(struct studentType *NS);
void assignLetterGrade(struct studentType *NS);
void findHighestScore(struct studentType *NS);
void outputStudentData(struct studentType *NS);
//main function 
int main(){

    readStudentData(newStudent);
    return 0; 
}
// read student data into the structer 
void readStudentData(struct studentType *NS){

    for(int i = 0; i < 10; i++){
        cout << "enter the first name: ";
        cin >> NS[i].studentFName;
        cout << "enter the last name: ";
        cin >> NS[i].studentLName;
        cout <<"enter the test score: ";
        cin >> NS[i].testScore;
        cout <<"\n";
    }
    assignLetterGrade(newStudent);
    findHighestScore(newStudent);
}
// assaign a letter grade based on the test score 
void assignLetterGrade(struct studentType *NS){
    for(int i = 0; i < 10;i++){
        if(NS[i].testScore >= 90 && NS[i].testScore <=100 ){
            NS[i].grade = 'A';
        }
        else if(NS[i].testScore >= 80 && NS[i].testScore < 90){
            NS[i].grade = 'B';
        }
        else if(NS[i].testScore >= 70 && NS[i].testScore < 80){
            NS[i].grade = 'C';
        }
        else if(NS[i].testScore >= 60 && NS[i].testScore <=70){
            NS[i].grade = 'D';
        }else{
            NS[i].grade = 'F';
        }
    }
}
// find the highest grade in the class 
void findHighestScore(struct studentType *NS){
    for(int i = 0; i < 10; i++){
       if(NS[0].testScore <= NS[i].testScore){
           NS[0].studentLName = NS[i].studentLName;
           NS[0].testScore = NS[i].testScore;
           NS[0].studentFName = NS[i].studentFName;
           NS[0].grade = NS[i].grade;
       }
    }
    outputStudentData(newStudent);
}
// out put the highest grade in the class 
void outputStudentData(struct studentType *NS){
    cout<< NS[0].studentLName << ","<< " " <<
    NS[0].studentFName << ", " << NS[0].grade << "\n"; 

}


