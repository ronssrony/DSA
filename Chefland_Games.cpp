#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int x ; 
    cin>>x ; 
    if (x<=50)
    {
        cout<<"LEFT"<<endl;
    }
    else if (x>=51 && x<=100)
    {
        cout<<"RIGHT"<<endl;
    }
    
}
    
    return 0 ;
}