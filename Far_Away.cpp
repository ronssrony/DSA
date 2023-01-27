#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
   int n , m  , count= 0 ; 
   cin>>n>> m ;
   int A[n]; 
   for (int i = 0 ; i< n ; i++)
   {
    cin>>A[i];
   }
   sort(A , A+n);
   int middle  = m/2 +1;
      for (int i = 0 ; i< n ; i++)
   {
        if (middle>A[i])
        {
             count+= m - A[i];
        }
       

        else 
        {
            count+= A[i]-1; 
        }
       

   }
   cout<<count<<endl;
    
}
    
    return 0 ;
}