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
       int sub=0 , oper= 0 , st , en; 
       bool palindrom = true;
       for(int i = 0; i<n ; i++)
       {
        cin>>arr[i]; 
       }
       int mid = n/2 ; 
      if(n&1)
      {
       st = mid-1 ;
       en = mid+1 ;
      }
      else 
      {
          st = mid - 1 ;
          en = mid ;
      }
            while(st>=0)
          {

             if(arr[st]>arr[en]||(arr[en]-arr[st])<sub)
              {
                palindrom=false;
                break;
              }
              sub = arr[en]-arr[st];
              
               st-- ;
               en++ ;
          }


          if(palindrom==true)
       {
          cout<<arr[n-1]-arr[0]<<endl;
       }
       else
       {
        cout<<"-1"<<endl;
       }
      }
      
     
    return 0 ;
}
    
  
