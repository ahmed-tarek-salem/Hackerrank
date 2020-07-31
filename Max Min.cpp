#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
     int n,k;
     vector<int> v; 
     cin>>n>>k;
     for(int i=0; i<n;i++)
     {
         int x;
         cin>>x;
         v.push_back(x);
     }
     sort(v.begin(),v.end());
     int min=v[k-1]-v[0];    
     for(int i=1; i<=n-k; i++)
     {
         if(min>v[i+k-1]-v[i])
        min=v[i+k-1]-v[i];    
     } 
     cout<<min;
    return 0;    
}

