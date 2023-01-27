#include<bits/stdc++.h>
using namespace std;

int main()
{
int t ;
cin>>t;
while(t--)
{
int count =0 ; 
string  s ;
cin>>s ;
int n = s.length()/2 ;
int l = s.length();
int left[26]={0};
int right[26]={0};
int index ;


for(int i = 0  ; i< n ; i++)
{
  int index = s[i] - 'a';
  left[index]++ ; 
}
for( int i = (l+1)/2 ; i<l ; i++)
{
  index = s[i]- 'a';
  right[index]++;
}
int cases =  0 ;
for( int i = 0 ; i<26 ; i++)
{
  if(left[i]!=right[i])
  {
    cases = 1 ;
  }
}

if ( cases == 0 )
{
  cout<<"YES"<<endl;
}
else 
{
  cout<<"NO"<<endl;
}
}
    
    return 0 ;
}