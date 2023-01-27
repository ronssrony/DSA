#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
 int n  , x; 
 cin>>n ; 
 int arr[n];
 for(int i = 0 ; i< n ;i++)
 {
    cin>>arr[i];
    
 }
x = arr[0];
 int sum = 0 ;
cout<<x<<" ";

for(int i = 0 ; i< n ; i++)
{
    sum += arr[i]^x ;
    
}

cout<<sum<<endl;
    
}
    
    return 0 ;
}