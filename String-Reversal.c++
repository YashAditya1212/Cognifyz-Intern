//Program to reverse a string 

#include <bits/stdc++.h>
#include <string> 
#include <iostream>
using namespace std;
 
// Function to reverse a string
void reverseStr(string& str)
{
    int len = str.length();
    int n = len-1;
    int i = 0;
    while(i<=n){
        //Using the swap method to switch values at each index
        swap(str[i],str[n]);
        n = n-1;
        i = i+1;
  }
 
}
 
int main()
{
  string str;
  cout<<"Enter the string to be reversed:"<<endl;
  cin>>str;
    
    reverseStr(str);
    cout << str;
    return 0;
}