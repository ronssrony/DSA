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
   string s ;
   cin>>s ;
   int cnt = 0 ; 
   for(int i = 0 ; i<n ; i++)
   {
        if(s[i]=='0')
        {
            cnt++ ; 
        }
   }
   int res = n - cnt ; 
   if((cnt&1)&&(res&1))
   {
    cout<<"NO"<<endl;
   }
   else 
   {
    cout<<"YES"<<endl;
   }
}
    
    return 0 ;
}