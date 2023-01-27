#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int log = 0 , b ;
    int n  ;
    cin>> n ;
    string s , ns;
    cin>>s ; 
    for(int i = 0 ; i< n ;i++)
   {
           if(s[i]=='H'||s[i]=='T')
           {
             ns = ns+ s[i] ;      
           }
   }
   if(ns.length()%2==0)
{
      
       for(int i = 0 , j = 1  ; i<ns.length()  , j<ns.length(); i=i+2 , j = j+2)

   { 
       if(ns[i]!='H')
       {
        log=1 ;
       }
       else if(ns[j]!='T')
       {
        log = 1 ;
       }
    
   }
}
else {
    log = 1 ;
}
  
   if(log==0)
   {
    cout<<"Valid"<<endl;
   }
   else 
   cout<<"Invalid"<<endl;
}
    
    return 0 ;
}