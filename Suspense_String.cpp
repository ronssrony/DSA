#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
   int a ,b ; 
   cin>>a>>b ;
   int n = a*b ;
   double slice = ceil(n / 4.0) ;
   cout<<slice<<endl;

}
    
    return 0 ;
}