#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n , x ; 
    cin>>n>>x ;
    int res = n-x ; 
    if(n-x>x)
    {
        cout<<x<<endl;
    }
    else 
    {
        cout<<n-x<<endl;
    }

}
    
    return 0 ;
}