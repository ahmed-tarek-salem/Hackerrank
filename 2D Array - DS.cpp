#include<bits/stdc++.h>

using namespace std;
   int grid[6][6];
  int dx[7]={0,0,0,1,2,2,2};
  int dy[7]={0,1,-1,0,0,1,-1};
  int n,sum=0,ans=0;
  
    bool valid(int x, int y)
  {
      if(x+2<6&&y>=1&&y+1<6)
      return 1;
      else 
      return 0;
  }
  
  void dfs(int i,int j)
  { 
      for(int k=0; k<7; k++)
      {
          int tgi=i+dx[k];
          int tgj=j+dy[k];
          sum+=grid[tgi][tgj];
      }
      if(sum>ans)
      ans=sum; 
      sum=0;   
  }

 int main()
 {
         for(int i=0; i<6; i++)
     {
         for(int j=0; j<6; j++)
         {
             cin>>grid[i][j];
         }
     }
     for(int i=0; i<6; i++)
     {
         for(int j=0; j<6; j++)
         {
             if(valid(i,j))
             dfs(i,j);
         }
     }
     cout<<ans;    
     return 0;
}

