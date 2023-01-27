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
    set <int> s1 ;
   int arr[n] ;  
   for(int i = 0 ; i<n ; i++)
   {
    cin>>arr[i] ;
    s1.insert(arr[i]);

   }   
   if((n&1) && (s1.size())==n)
   {
    cout<<"NO"<<endl;
   }
   else 
   {
    cout<<"YES"<<endl;
   }
}
    
    return 0 ;
}