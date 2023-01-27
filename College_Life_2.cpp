#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>

using namespace std;
int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
        int n ;
        cin>>n;
        int  intro[n] ,l;
        

       for (int j = 0 ; j<n; j++)
       {
           cin>>intro[j];

       }
       long long sum=0;
       for (int k = 0 ; k<n ; k++)
       {
           cin>>l;
           int ep[l];
           for (int m = 0 ; m<l ; m++)
           {
               cin>>ep[m];
               if (m>=1)
               {
                   sum = sum + ep[m]-intro[k];
               }
               else
               {
                 sum = sum + ep[m];
               }

           }
          
       }
       cout<<sum<<endl;
}
return 0;
}
