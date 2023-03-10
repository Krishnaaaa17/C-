// There are N students in a class, where the i-th student has a score of Ai​.
// The i-th student will boast if and only if the number of students scoring less than or equal to Ai​ is greater than the number of students scoring greater than Ai​.
// Find the number of students who will boast.
// Input Format
// The first line contains T - the number of test cases. Then the test cases follow.
// The first line of each test case contains a single integer N - the number of students.
// The second line of each test case contains N integers 1,2,…,A1​,A2​,…,AN​ - the scores of the students.
// Output Format
// For each test case, output in a single line the number of students who will boast.



// Constraints
// 1≤T≤1000
// 1≤N≤100
// 0≤Ai​≤100


#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 while (n--)
 {
 int a;
 cin>>a;
 int arr[a];
 int sum=0;
 for (int i = 0; i < a; i++)
 {
 cin>>arr[i];
 }
 for (int i = 0; i < a; i++)
 {
 int count=0;
 for (int j = 0; j < a; j++)
 {
 if (count<a-count)
 sum++;
 }
 cout<<sum<<endl;
 }
 return 0;
}