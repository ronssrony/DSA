#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n , prod=1 , neg = 0 ;
    bool zero = false ; 
    cin>> n ;
    int arr[n];  
    for(int i = 0 ; i< n ;i++)
    {
       cin>>arr[i];
       if(arr[i]<0)
       {
        neg++ ; 
       }
       if(arr[i]==0)
       {
        zero=true;
       }

    }
   if(zero==true)
   {
    cout<<0<<endl;
   }
   else if(neg%2==0)
   {
    cout<<0<<endl;
   }
   else{
         cout<<1<<endl;
   }
   

}
    
    return 0 ;
}