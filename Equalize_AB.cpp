#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    long long a , b , x ;
   
    cin>>a>>b>>x ; 

    if((b-a)%(x*2)==0)
    {
        cout<<"YES"<<endl;
    }
    else 
    cout<<"NO"<<endl;


}
    
    return 0 ;
}