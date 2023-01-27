
#include<iostream>
#include<bits/stdc++.h>
#define yes cout<<"Yes"<<endl;
#define No cout<<"NO"<<endl;

using namespace std;

int main()
{
    int t , n , m  ;
    cin>>t;
    while(t--)
    {
       cin>>n>>m ;
       int arr[n];
      int  count =0 ;
      set<int>s1;
      
       for (int i = 0 ; i<n ; i++)
       {
           cin>>arr[i];
           s1.insert(arr[i]);
       }
       if (s1.size()==m)
       {
         No;
       }
       else 
       yes;
    }
    
return 0;

}

