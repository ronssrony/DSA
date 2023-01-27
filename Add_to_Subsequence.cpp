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
    int arr[n] ; 
    int max [n] = {0} ;
    for(int i =0 ; i<n  ;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n); 
    int j  =0 ;
    for(int i  =0  ; i<n ; i++)

    {
        
         max[j]++ ;
        if(arr[i]<arr[i+1])
        {
           
            j++;
        }
      
    }
    int mx =1 ;
    int mix = *max_element(max,max+n) ;
    mx = (mx,mix) ;
     int ans = 0 , temp = 1 ; 
     while(temp<mx)
     {
         ans++ ; 
          temp<<=1;

     }
     cout<<ans<<endl;
}
    
    return 0 ;
}