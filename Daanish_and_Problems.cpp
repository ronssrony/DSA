#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int arr[10] , k;
    for(int i = 0;  i<=9; i++)
    {
        cin>>arr[i];
    }
  cin>>k ;
  
  for(int i = 9 ; i>=0 ; i--)
  {
    if(k>=arr[i])
    {
        k = k - arr[i];
        arr[i] = 0  ;
    }
    else {
          arr[i] = arr[i]-k ; 
          break;
    }
  }
  for(int i = 9  ;i>=0 ; i--)

{
    if(arr[i]>0)
    {
        cout<<i+1<<endl;
        break;
    }
}
 
}
    
    return 0 ;
}