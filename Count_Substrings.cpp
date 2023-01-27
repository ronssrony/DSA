#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
  int  n , m=0 , t ;
  cin>> n ;
  string s ; 
  cin>>s;
  for(int i = 0 ; i < n ; i++ )
  {

    if(s[i]-48==1)
    {
        m++;
    }
  }




   t = (m*(m+1))/2;
   cout<<t<<endl;

}
    
    return 0 ;
}