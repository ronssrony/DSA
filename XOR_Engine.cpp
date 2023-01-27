#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n , p , q ,x , y; 
    cin>>n>>q;
    int arr[n] ; 
    int even = 0 , odd= 0 ; 
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i] ; 
    }
 
    for(int i = 0 ; i<n ; i++)
    {  
       x = arr[i] ; 
       y = __builtin_popcount(x)  ;
       if(y&1) 
       {
         odd++;
       }
       else 
       {
         even++ ; 
       }

    }
    for(int i = 0 ;i<q ; i++)
    {
      cin>>p ;
    p = __builtin_popcount(p) ; 
    if((p&1)) 
    {
      int tem = even ; 
      even = odd ; 
      odd = tem ; 
    }

   cout<<even<<" "<<odd<<endl;
    }
   
   
}
 
    return 0 ;
}