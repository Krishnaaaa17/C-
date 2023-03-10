// Dhruv is very fond of horses. He enjoys watching them race. As expected, he has a stable full of horses. He, along with his friends, goes to his stable during the weekends to watch a few of these horses race. Agastya wants his friends to enjoy the race and so he wants the race to be close. This can happen only if the horses are comparable on their skill i.e. the difference in their skills is less.
// There are N horses in the stable. The skill of the horse i is represented by an integer S[i]. Dhruv needs to pick 2 horses for the race such that the difference in their skills is minimum. This way, he would be able to host a very interesting race. Your task is to help him do this and report the minimum difference that is possible between 2 horses in the race.
// Input:
// First line of the input file contains a single integer T, the number of test cases.
// Every test case starts with a line containing the integer N.
// The next line contains N space separated integers where the i-th integer is S[i].
// Output:
// For each test case, output a single line containing the minimum difference that is possible.
// Constraints:
// 1 ≤ T ≤ 10
// 2 ≤ N ≤ 5000
// 1 ≤ S[i] ≤ 1000000000

#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
 int n;
 cin>>n;
 int *arr=new int[n];
 for(int i=0;i<n;i++)
 {
 cin>>arr[i];
 }
 sort(arr,arr+n);
 int x;
 int y=INT_MAX;
 for(int i=0;i<n-1;i++)
 {
 int x=arr[i+1]-arr[i];
 y=min(y,x);
 }
 cout<<y<<endl;
}
return 0;
}
