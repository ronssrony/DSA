#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;

while(t--)
{   int scolor, pcolor =0 ;
    int a = 0 , b = 0 , c = 0 ; 
    int x,y,z ; 
    cin>>x>>y>>z ;
    

    if (x>1 && y >1)
    {
        a++ ; 
        x-- ; 
        y-- ;
    }
    if (y>1 && z>1)
    {
        b++;
        y--;
        z--;
    }
     if(x>1 && z>1)
    {
        c++ ; 
        x-- ; 
        z--;
    }
    scolor = a+b+c ; 
    
    if (x>=1)
    {
        pcolor++;
    }
    if(y>=1)
    {
        pcolor++;
    }
     if(z>=1)
    {
        pcolor++;
    }
    cout<<scolor+pcolor<<endl;
    



}
    
    return 0 ;
}