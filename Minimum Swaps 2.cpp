#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
     int count=0,n;
     int arr[100005];
     cin>>n;
     for(int i=1; i<=n; i++)
     cin>>arr[i];
     
     for(int i=1; i<=n; i++)
     {
         while(arr[i]!=i)
         {   
             int a=arr[i];
             swap(arr[a],arr[i]);
             count++;
         }
     }
  cout<<count;
     return 0;
}

