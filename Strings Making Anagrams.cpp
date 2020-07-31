#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     string str1;
     string str2;
     int count=0;
     int arr[26]={0};
     cin>>str1;
     cin>>str2;
     
     for(int i=0; i<str1.length(); i++)
     arr[str1[i]-97]++;
     
     for(int i=0; i<str2.length(); i++)
     arr[str2[i]-97]++;
     
     for(int i=0; i<26; i++)
     {
         if(arr[i]%2!=0)
         count++;
     }
     if(count==str1.length()+str2.length())
     cout<<count-1;
     else
     cout<<count;  
     return 0;
}

