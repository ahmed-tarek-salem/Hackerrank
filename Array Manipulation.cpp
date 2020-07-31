#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     long long n,m,ans=0;
     cin>>n>>m;
     vector <long long> v;
     v.assign(n,0);
     long long x,y,k;
     for(int i=0; i<m; i++)
     {
         cin>>x>>y>>k;
         v[x-1]+=k;
         if(y<n)
         v[y]-=k;
     }
     
     for(int i=1; i<n; i++)
     {
         v[i]+=v[i-1];
         if(v[i]>ans)
         ans=v[i];
     }    
     cout<<ans; 
     return 0;
}

