#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     string str;
     int n;
     cin>>n;
     cin>>str;
     int count=0, sum=n;
     for(int i=0; i<n; i++)
     {
         
         while(i<n-1&&str[i]==str[i+1])
         {
             i++;
             count++;
         }
         sum+= ((count*(count+1))/2);
         count=0;
         
         if(i<n-2&& str[i]==str[i+2])
         sum++;
     }
     
     for(int i=0; i<n-1; i++)
     {
         while(str[i]==str[i+1])
         {
             count++;
             i++;
         }
         int t=count;
         if(i<n-1)
         {
         
         while(i<n-1&&count--)
         {
             if(str[i]!=str[i+1])
             {
                 t=0;
                 break;
             }
             else
             i++;
         }
         sum+=t;
         t=0;
          count=0;
      }
     }
    cout<<sum;
    return 0;
}

