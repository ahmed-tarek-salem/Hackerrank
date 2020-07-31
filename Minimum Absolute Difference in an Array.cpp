#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int n,min=0;
     int arr[100001];
     cin>>n;
     for(int i=0; i<n; i++)
     cin>>arr[i];
     sort(arr,arr+n);
     min=abs(arr[1]-arr[0]);
     for(int i=2; i<n; i++)
     {
         if(min>abs(arr[i]-arr[i-1]))
         min=abs(arr[i]-arr[i-1]);
     }
     cout<<min;
     return 0;
}

