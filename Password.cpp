#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    string s ; 
    string con = "@#%&?";
    cin>>s ;
    bool lower = false , upper = false , inside = true , len = false , strin = false , digit = false ;
    int n = s.length(); 
    if(s.length()>=10 )
    {
        len = true ;
    }
    for(int i = 0 ; i<s.length() ; i++)
    {
        for(int j = 97 ; j<=122 ; j++)
        {
            if (s[i]==j)
            {
                lower = true ; 
            }
        } 
       
    }
 
     for(int i=1 ; i<n-1 ; i++)
    {
          for (int j = 65 ; j<=90 ; j++)
        {
             if(s[i] == j)
            {
                upper = true ;
            }
        }
        
        for (int j = 0 ; j<=9 ; j++)
        {
          
            if(s[i]-48==j)
            {
                digit = true ; 
            }
        }
        for(int j = 0 ; j <con.length() ; j++)
        {
           
            if(s[i]==con[j])
            {
                strin = true ;
            }
        }
}
   if(lower == true && upper == true && len==true && digit == true && strin == true && inside == true)
{
    cout<<"YES"<<endl;

}
else 
cout<<"NO"<<endl;

}   



    return 0 ;
}
