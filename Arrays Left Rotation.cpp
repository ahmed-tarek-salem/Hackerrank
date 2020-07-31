#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   vector<int> arr;
   int n,d;
   cin>>n>>d;
   for(int i=0; i<n; i++)
   {
       int x;
       cin>>x;
       arr.push_back(x);
   }
   for(int i=d; i<n; i++)
   cout<<arr[i]<<" ";  
   for(int i=0; i<d; i++)
   cout<<arr[i]<<" ";  
     return 0;
}

