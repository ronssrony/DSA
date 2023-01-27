#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n ; 
     cin>>n ;
    //pair as a array 
   pair<int,int>p_arr[n]; 
   \\input the pair
   for(int i = 0 ; i<n ; i++)
   {
     cin>>p_arr[i].first>>p_arr[i].second;
   }  
   //printing pair 
    for(int i = 0 ; i<n ; i++)
   {
     cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl; 
   }    

    return 0 ;
}