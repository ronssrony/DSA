#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    set<int>s ; 
    int n ,  k  , ins , sev , bro; 
    cin>> n >> k ;
    long long arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i] ; 
        ins = arr[i];
        s.insert(ins) ; 
    }
    sev = n -  k ;
    if(sev>=s.size())
    {
        cout<<s.size()<<endl;
    }
    else 
    {
       cout<<sev<<endl;
    }

    
}
    
    return 0 ;
}