#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n  ;  
    cin>>n ; 
   string s ;
    cin>>s ; 
    int cnt =0 , max = 0 ;
    for(int i = 0; i<n;  i++)
    {
      if(s[i] == '1')
      {
        cnt++; 
      }
      else if(s[i]=='0')
      {
        if(max<cnt)
        {
          max = cnt ;
        }
        cnt = 0 ;
     
      }
      
    }
    if(cnt == n)
    {
      cout<<cnt<<endl;
    }
    else {
       cout<<max<<endl;
    }
   
    
}
    
    return 0 ;
}