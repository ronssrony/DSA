#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    string s  ;
    cin>>s ;
    int ans = 0 ; 
    int n = s.length() ;
    int arr[n] ; 
    for(int i = 0 ; i< n ;i++)
    {
        arr[i] = s[i] ;
        
    }
    for(int i = 0 ; i<n ; i++)
     
     {
        ans ^=arr[i] ; 
     }
     if(ans==0)
     {
        cout<<"-1"<<endl;
     }
     else {
     char c = ans;
     cout<<c<<endl;

     }
    
}
    
    return 0 ;
}