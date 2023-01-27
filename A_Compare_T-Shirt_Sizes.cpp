#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    string a , b ;
    cin>>a>>b ;
    int cta = 0 , ctb = 0 ;  
    for(int i = 0 ; i<a.length() ; i++)
    {
        if(a[i]=='X')
        {
            cta++ ; 
        }
    }

   for(int i = 0 ; i<b.length() ; i++)
   {
    if(b[i]=='X')
    
      {
        ctb++ ; 
      }
   }
   if( ( (a.find('S')>=1 && (b.find('S')>=1) )))
   {
    if(cta>ctb)
    {
        cout<<"<"<<endl;
    }
    else if(cta<ctb)
    {
        cout<<">"<<endl;
    }
    else 
    {
        cout<<"="<<endl;
    }
   }
   else if( ( (a.find('L')>=1 && (b.find('L')>=1) )))
   {
      if(cta>ctb)
    {
        cout<<">"<<endl;
    }
    else if(cta<ctb)
    {
        cout<<"<"<<endl;
    }
    else 
    {
        cout<<"="<<endl;
    }

   }
   
}
    
    return 0 ;
}