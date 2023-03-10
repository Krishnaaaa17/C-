// There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. If there are K other students who have already enrolled in the course, determine if it will still be possible for all the N friends to do so or not.
// Input Format
// The first line contains a single integer T - the number of test cases. Then the test cases follow.
// Each test case consists of a single line containing three integers N, M and K - the size of the friend group, the capacity of the course and the number of students already registered for the course.
// Output Format
// For each test case, output Yes if it will be possible for all the N friends to register for the course. Otherwise output No.
// You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).


#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
 int n,m,k;
 cin>>n>>m>>k;
 if((n+k)<=m){
 cout<<"yes"<<endl;
 }else{
 cout<<"no"<<endl;
 }
}
return 0;
}