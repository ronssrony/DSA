#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{

   int n , cnt = 0 ;
   cin>> n ;
   string s ; 
   cin>>s  ;
   if(n<=2)
   {
    cout<<s<<endl;
   } 
   else {
    for(int i = 0 ; i<n ; i++)
    {
        if(s[i]=='0')
        {
            cnt++;
        }
    }
  
    for(int i = 0 ; i<cnt ; i++)
    {
        cout<<0;
    }
    for(int i = 0 ; i<n-cnt ; i++)
    {
        cout<<1;
    }
      cout<<endl;
   }
  
}
    
    return 0 ;
}