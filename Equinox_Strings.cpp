#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    string eq = "EQUINOX";
    int  n , c = 0 , d ;
    long long a , b ; 
    cin>>n>>a>>b ;
    string s ;
   for(int i = 0 ; i< n ;i++)
  
  {
       cin>>s ; 
       for(int j = 0 ; j<eq.length() ; j++)
       {
            if(s[0]==eq[j])
            {
                c++ ;
            }
       }

  }
  b = b*(n-c);
  a = a*c ;


    if(a>b)
    {
        cout<<"SARTHAK"<<endl;
    }
    else if(a<b)
    {
        cout<<"ANURADHA"<<endl;
    }
    else 
    cout<<"DRAW"<<endl;

}
    
    return 0 ;
}