#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
     string str;
     int n,level=0, Valleys=0;
     cin>>n>>str;
     for(int i=0; i<n;i++)
     {
     	if(level==0&&str[i]=='D')
     	Valleys++;
     	if(str[i]=='D')
     	level--;
     	else
     	level++;
	 }
	 cout<<Valleys;
    return 0;    
}

