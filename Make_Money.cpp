#include<bits/stdc++.h>
using namespace std;
int main()
{
int _ ;
cin>>_;
while(_--)
{
    int n , x , c , ttlcoin=0, flag=0 ;
    cin>>n>>x>>c ;
    int arr[n] ; 
    for(int i = 0 ;i<n ; i++)
    {
       cin>>arr[i];
    }
    
   for(auto value : arr)
   {
       if((x-value)>c)
       {
         ttlcoin+=x ;
         flag++ ;
       }
       else 
       {
          ttlcoin+=value ;
       }
   }
   cout<<ttlcoin-(flag*c)<<endl;

}
    
    return 0;
}
