#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll       long long
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define ff       first
#define ss       second
#define sz(x)    (int) x.size()
#define all(v)   v.begin(), v.end()
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n,m ,x , y  ;
    
    cin>>n>>m ; 
    cin>>x>>y ;
    for (int i = 0 ; i< n ; i++)
    {
        int countf= 0 , countp= 0 ;
        string s ; 
        cin>>s ; 
        for(int j = 0 ; j<s.length() ; j++)
        {
            if(s[j] == 'F')
            countf++ ;
            else if(s[j]=='P')
            countp++ ;
        }

         if(countf>=x ||(countp>=y&&countf==x-1) )
         {
            cout<<1 ; 
         }

       else 
       cout<<0;   


        

    }
  
   cout<<endl;
    
     
     



}
    
    return 0 ;
}