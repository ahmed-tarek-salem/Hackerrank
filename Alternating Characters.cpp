#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
     string str;
     cin>>str;
     int i=0,count=0;
     while(i<str.length()-1)
     {
         while(str[i]==str[i+1])
         {
             count++;
             i++;
         }
             i++;
     }
          cout<<count<<endl;
     }
     return 0;
}

