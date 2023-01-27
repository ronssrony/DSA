#include<bits/stdc++.h>
#include<string>
using namespace std ; 
int main()
{
    int t  ; cin>>t  ; 
    string s ;
     
    while (t--)
    {
        cin>>s ;  
       
       for ( int i = 0 ; i<s.length() ; i++)
       {
                if(s.substr(i,5)=="party")
                {
                    s[i] = 'p';
                    s[i+1] = 'a';
                    s[i+2] = 'w';
                    s[i+3] = 'r';
                    s[i+4] = 'i';
                    i  =i +4; 
                }

       }
       cout<<s<<endl;
    }
    return 0;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    return 0 ;
}
       
       
      

    
    
