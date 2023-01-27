#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
   int n   ;
   cin>>n ;
   int arr[n] , msk[n]={0} ; 
   for(int i = 0 ; i< n ; i++)
   {
    cin>>arr[i];
   }
   sort(arr,arr+n) ;
   int j = 0; 
   for(int i = 0 ; i<n ; i++)
   {
        msk[j]++ ; 
        if(arr[i]<arr[i+1])
        {
            j++ ;
        }

   }
   int mx = *max_element(msk,msk+n); 
  
 
  cout<<n-mx<<endl;

}
    
    return 0 ;
}