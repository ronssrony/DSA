#include<bits/stdc++.h>
using namespace std;

int main()
{
int t ;
cin>>t;
while(t--)
{       bool flag = true ;
        int s ; 
        cin>>s  ;
        int n ; 
        cin>>n ;
        
       int cnt=0 ;
    
      int ans=0; int x=1 ;
        while(n)
        {
                int res = n%10 ;
                ans +=res*x ; 
                n = n/10 ;
                x *=2 ;
        }
      
         if(ans&1)
        {
                ans = ans -1 ;
        }
        
        
        int y = 1 ;
        while(ans>=y)
        {    
             y *=2 ;
        }
        y = y/4 ;

        ans -=y ;
       
    
       float z = 1.0; 
       int m = 1 ;
        while(ans>=z)
        {
                if((ans/z)==1)
                {
                  cout<<"YES"<<endl;
                  flag = false ;
                  break;
                }
                  
                 z *=2.0 ;
        }
        if(flag)
        {
            while(ans>=m)
            {
                m *=2 ;
            }
            m = m/2 ;
            ans -= m ;
             float top =1  ;
            while(ans>=top)
        {
                if((ans/top)==1)
                {
                        cout<<"YES"<<endl;
                        flag = false ;
                        break;
                }
                top *=2.0;
        }
        }
     
        if(flag)
        {
                cout<<"NO"<<endl;
        }
        
      
     
         
       
       
}
        
        return 0 ;
}