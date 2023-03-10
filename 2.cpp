// You are given the height H (in metres) and mass M (in kilograms). The Body Mass Index (BMI) of a person is computed as 
// Report the category into which a person falls, based on his BMI:
// Category 1: Underweight if BMI<=18
// Category 2: Normal weight if BMI belongs to 19,20,...,24.
// Category 3: Overweight if BMI belongs to 25,26,...,29
// Category 4: Obesity if BMI>=30


// Input:
// The first line of input will contain an integer, TT, which denotes the number of testcases. Then the testcases follow.
// Each testcase contains a single line of input, with two space separated integers, M, HM,H, which denote the mass and height of Agastya respectively.
// Output:
//  For each testcase, output in a single line, 1, 2, 31,2,3 or 44, based on the category in which Agastya falls.
// Constraints
//  1<=T<=2*10^4
//  1<=M<=10^4
//  1<=H<=10^2
// It is guaranteed that  divides M.

#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
 int m,h;
 cin>>m>>h;
 int BMI = (m/(h*h));
 if(BMI<=18)
 cout<<"1"<<endl;
 else if(BMI>=19 && BMI<=24)
 cout<<"2"<<endl;
 else if(BMI>=25 && BMI<=29)
 cout<<"3"<<endl;
 else if(BMI>=30)
 cout<<"4"<<endl;
}
return 0;
}