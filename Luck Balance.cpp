#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int n,k;
     cin>>n>>k;
     int x,y;
     int sum=0,c=0;
     vector <int> v;
     for(int i=0; i<n; i++)
     {
         cin>>x>>y;
         if(y==0)
         sum+=x;
         else
         {
             v.push_back(x);
         }
    }
         sort(v.begin(),v.end());
         for(int i=v.size()-1; i>=0; i--)
         {
             if(k)
         {    sum+=v[i];
              k--;    }
              else
              sum-=v[i];
           }
         cout<<sum;
     return 0;
}

