#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n ;
    cin>>n ; 
    int arr[n]  , cnt = 0  , odd = 0 , even =0 ; 
    for(int i = 0 ; i<n  ;i++)
    {
        cin>>arr[i];
        if((arr[i]&1))
        {
            odd++;
        }
        else 
        {
            even++ ;
        }
    }
    
    
    cout<<cnt<<endl;
}
    
    return 0 ;
}