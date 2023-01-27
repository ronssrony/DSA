#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    set<int>s1 ;
    int n ; 
    cin>>n ; 
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i] ;
        s1.insert(arr[i]);
    }
    int st = s1.size();
    if(st==n)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }

    
}
    
    return 0 ;
}