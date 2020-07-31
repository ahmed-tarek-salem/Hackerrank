#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int n,k,count=0,sum=0,x;
     int arr[1001];
     cin>>n>>k;
     for(int j=0; j<n; j++)
     {
         cin>>arr[j];
     }
     
     sort(arr,arr+n,greater<int>() );
     
     x=n/k;
     int i=0;
     while(x--)
     {
         int a=i+k;
         for(i; i<a; i++)
         {
             sum+=((count+1)*arr[i]);
         }
         count++; 
     }
     x=n%k;
     int a=x+i;
     for(i; i<a; i++)
     sum+=((count+1)*arr[i]);   
     cout<<sum;
    return 0;   
}

