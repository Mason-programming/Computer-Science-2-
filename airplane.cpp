#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
int airplane[13][6];
char airchar[13][6];
string ticket;
int row[2];
char seat;
for(int i = 0; i < 13; i++)
{
for(int j = 0; j < 6; j++)
{
airchar[i][j] = '*';
airplane[i][j] = 0;
  
}
}

for(;;)
{
cout<<"Rows 1 and 2 are first class (FC)"<<endl;
cout<<"Rows 3 through 7 are business class (BC)"<<endl;
cout<<"Rows 8 through 13 are economy class (EC)"<<endl;
cout<<endl;
cout<<"* - Available"<<endl;
cout<<"X - Occupied"<<endl;
cout<<endl;
  
cout<<" \tA\tB\tC\tD\tE\tF"<<endl;
cout<<"Row 1\t"<<airchar[0][0]<<"\t"<<airchar[0][1]<<"\t"
<<airchar[0][2]<<"\t"<<airchar[0][3]<<"\t"<<airchar[0][4]<<"\t"
<<airchar[0][5]<<endl;
  
cout<<"Row 2\t"<<airchar[1][0]<<"\t"<<airchar[1][1]<<"\t"
<<airchar[1][2]<<"\t"<<airchar[1][3]<<"\t"<<airchar[1][4]<<"\t"
<<airchar[1][5]<<endl;
  
cout<<"Row 3\t"<<airchar[2][0]<<"\t"<<airchar[2][1]<<"\t"
<<airchar[2][2]<<"\t"<<airchar[2][3]<<"\t"<<airchar[2][4]<<"\t"
<<airchar[2][5]<<endl;
  
cout<<"Row 4\t"<<airchar[3][0]<<"\t"<<airchar[3][1]<<"\t"
<<airchar[3][2]<<"\t"<<airchar[3][3]<<"\t"<<airchar[3][4]<<"\t"
<<airchar[3][5]<<endl;
  
cout<<"Row 5\t"<<airchar[4][0]<<"\t"<<airchar[4][1]<<"\t"
<<airchar[4][2]<<"\t"<<airchar[4][3]<<"\t"<<airchar[4][4]<<"\t"
<<airchar[4][5]<<endl;
  
cout<<"Row 6\t"<<airchar[5][0]<<"\t"<<airchar[5][1]<<"\t"
<<airchar[5][2]<<"\t"<<airchar[5][3]<<"\t"<<airchar[5][4]<<"\t"
<<airchar[5][5]<<endl;
  
cout<<"Row 7\t"<<airchar[6][0]<<"\t"<<airchar[6][1]<<"\t"
<<airchar[6][2]<<"\t"<<airchar[6][3]<<"\t"<<airchar[6][4]<<"\t"
<<airchar[6][5]<<endl;
  
cout<<"Row 8\t"<<airchar[7][0]<<"\t"<<airchar[7][1]<<"\t"
<<airchar[7][2]<<"\t"<<airchar[7][3]<<"\t"<<airchar[7][4]<<"\t"
<<airchar[7][5]<<endl;
  
cout<<"Row 9\t"<<airchar[8][0]<<"\t"<<airchar[8][1]<<"\t"
<<airchar[8][2]<<"\t"<<airchar[8][3]<<"\t"<<airchar[8][4]<<"\t"
<<airchar[8][5]<<endl;
  
cout<<"Row 10\t"<<airchar[9][0]<<"\t"<<airchar[9][1]<<"\t"
<<airchar[9][2]<<"\t"<<airchar[9][3]<<"\t"<<airchar[9][4]<<"\t"
<<airchar[9][5]<<endl;
  
cout<<"Row 11\t"<<airchar[10][0]<<"\t"<<airchar[10][1]<<"\t"
<<airchar[10][2]<<"\t"<<airchar[10][3]<<"\t"<<airchar[10][4]<<"\t"
<<airchar[10][5]<<endl;
  
cout<<"Row 12\t"<<airchar[11][0]<<"\t"<<airchar[11][1]<<"\t"
<<airchar[11][2]<<"\t"<<airchar[11][3]<<"\t"<<airchar[11][4]<<"\t"
<<airchar[11][5]<<endl;
  
cout<<"Row 13\t"<<airchar[12][0]<<"\t"<<airchar[12][1]<<"\t"
<<airchar[12][2]<<"\t"<<airchar[12][3]<<"\t"<<airchar[12][4]<<"\t"
<<airchar[12][5]<<endl;
  
cout<<endl;
  
cout<<"Enter Ticket type (FC, BC, or EC): ";
cin>>ticket;
  
  
cout<<"Desired Row: ";
cin>>row[0];
  
cout<<"Desired seat (A,B,C,D,E or F): ";
cin>>seat;
  
  
  
switch(seat)
{
case 'A':
case 'a':
row[0] = row[0] - 1;
row[1] = 1;
row[1] = row[1] - 1;
break;
  
case 'B':
case 'b':
row[0] = row[0] - 1;
row[1] = 2;
row[1] = row[1] - 1;
break;
  
case 'C':
case 'c':
row[0] = row[0] - 1;
row[1] = 3;

row[1] = row[1] - 1;
break;
  
case 'D':
case 'd':
row[0] = row[0] - 1;
row[1] = 4;
row[1] = row[1] - 1;
break;
  
case 'E':
case 'e':
row[0] = row[0] - 1;
row[1] = 5;
row[1] = row[1] - 1;
break;
  
case 'F':
case 'f':
row[0] = row[0] - 1;
row[1] = 6;
row[1] = row[1] - 1;
break;
  
}
  
  
if(ticket == "FC")
{
if(row[0]+1 == 1 || row[0]+1 == 2)
{
  
if(airplane[row[0]][row[1]] == 0)
{
airplane[row[0]][row[1]] = 1;
airchar[row[0]][row[1]] = 'X';
}
else if(airplane[row[0]][row[1]] == 1)
{
cout<<"Message: Seat "<<row[0] + 1<<seat<<" is already occupied"<<endl;
system("Pause");
}
  
}
else
{
cout<<"Wrong Class"<<endl;
system("Pause");
system("cls");
continue;  
}
  
}
else if(ticket == "BC")
{
if(row[0]+1 == 3 || row[0]+1 == 4 || row[0]+1 == 5
  
|| row[0]+1 == 6|| row[0]+1 == 7)
{
if(airplane[row[0]][row[1]] == 0)
{
airplane[row[0]][row[1]] = 1;
airchar[row[0]][row[1]] = 'X';
}
else if(airplane[row[0]][row[1]] == 1)
{
cout<<"Message: Seat "<<row[0] + 1<<seat<<" is already occupied"<<endl;
system("Pause");
}
}
else
{
cout<<"Wrong Class"<<endl;
system("Pause");
system("cls");
continue;  
}
}
else if(ticket == "EC")
{
if(row[0]+1 == 8 || row[0]+1 == 9 || row[0]+1 == 10
  
|| row[0]+1 == 11|| row[0]+1 == 12|| row[0]+1 == 13)
{
if(airplane[row[0]][row[1]] == 0)

{
airplane[row[0]][row[1]] = 1;
airchar[row[0]][row[1]] = 'X';
}
else if(airplane[row[0]][row[1]] == 1)
{
cout<<"Message: Seat "<<row[0] + 1<<seat<<" is already occupied"<<endl;
system("Pause");
}
}
else
{
cout<<"Wrong Class"<<endl;
system("Pause");
system("cls");
continue;  
}
}
  
row[0] = 0;
row[1] = 0;
system("cls");
}
return 0;
}