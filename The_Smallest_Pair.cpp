#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
   int n , k; 
   cin>> n>> k; 
  int arr[n] , son = 0 , dad = 0 ;
   for(int i = 0 ; i< n ; i++)
   {
    cin>>arr[i];
   }

   sort(arr, arr+n);
   k = min (k, n-k);
  for(int i = 0 ; i<k ; i++)
  {
      son = son+arr[i];
  }
  for(int i = k ; i< n ; i++)
  {
    dad = dad+arr[i] ;
  }

 cout<<dad-son<<endl;


}
    
    return 0 ;
}