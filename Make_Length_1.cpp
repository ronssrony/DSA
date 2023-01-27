#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n , flag = 0; 
    cin>>n ;
    string s ;
    cin>>s ; 
   for(int i = 0 ; i<n  ; i++)
   {
    if(s.substr(i,2)=="11")
    {
        s[i] = '0' ;
        s[i+1] = '0' ; 
        i = i+1 ;
    }
   }
    for(int i  = 0 ; i<n ; i++)
    {
        if(s[i]=='1')
        {
            flag = 1 ;
            break;
        }
    }
    if(flag==0 || s.size()==1)
    {
        cout<<"YES"<<endl;
    }
    else 
    cout<<"NO"<<endl;
}
    
    return 0 ;
}