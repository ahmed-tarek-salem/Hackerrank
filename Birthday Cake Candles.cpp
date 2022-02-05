#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n=0;
   cin>>n;
   int  arr[n];

   int maxNum=0;
   int numOfMax = 0;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

    for(int i=0; i<n; i++){
    if(arr[i] > maxNum){
        maxNum=arr[i];
        numOfMax = 1;
    }
    else if (arr[i] == maxNum){
        numOfMax++;
    }
   }
        cout<<numOfMax;

    return 0;
}
