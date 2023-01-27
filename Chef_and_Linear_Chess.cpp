#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n , k ;
    cin>> n >> k ;
    int  ns[n] = {0}     ;
    int arr[n] ; 
    int j = 0;
    for(int i = 0 ;i< n ;i++)
    
   {
    cin>>arr[i];
    if(k%arr[i]==0)
    {  
          ns[j] = arr[i];
          j++;
    }
   }
int max = 0;
   for(int i = 0 ; i<n ; i++)
     
     {
        if(max<ns[i])
        {
            max = ns[i] ;
        }
     }
     if(max== 0 )
     {
        cout<<"-1"<<endl;
     }
     else {
         cout<<max<<endl;
     }
    
}
    
    return 0 ;
}