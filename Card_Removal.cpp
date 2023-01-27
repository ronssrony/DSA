#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n , ct= 0; 
    cin>>n  ;
    int arr[n] ; 
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i] ; 
    }
    sort(arr,arr+n);
    int max = 0 ;  
    for(int i =  0 ; i< n ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            if(arr[i]==arr[j]) 
            {
                ct++ ; 
            }

        }
       if(max<ct) 
    {
        max = ct ;
    } 
    ct = 0 ; 
   
        
    } 
  cout<<n-max<<endl;

}
    
    return 0 ;
}