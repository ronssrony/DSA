#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
        int n ; 
        cin>>n ;
        
       int arr[n] ;
       for(auto i = 0 ;i<n ; i++)
       {
          cin>>arr[i] ;
       }
       for(auto i =0 ;i<n-1 ;i++)
       {
              for(int j = j+1 ;j<n ;j++)
              {
                    if(arr[j]<arr[i])
                    {
                        int temp  = arr[j] ; 
                        arr[i] = arr[j]
                    }
              }
       }
}
        
        return 0 ;
}