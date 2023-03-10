// You will be given an array of N integers and you have to print the integers in the reverse order.
// Input Format
// The first line of the input contains N ,where N  is the number of integers. The next line contains  N space-separated integers.
// Constraints
// 1≤N≤1000
// 1≤A[i]≤10000 where A[i] is the ith integer in the array.

#include<iostream>
using namespace std;
int main()
{
 int arr[10], i;
 cout<<"Enter 10 Array Elements: ";
 for(i=0; i<10; i++)
 cin>>arr[i];
 cout<<"\nThe Original Array is:\n";
 for(i=0; i<10; i++)
 cout<<arr[i]<<" ";
 cout<<"\n\nThe Reverse of Given Array is:\n";
 for(i=(10-1); i>=0; i--)
 cout<<arr[i]<<" ";
 cout<<endl;
 return 0;
}