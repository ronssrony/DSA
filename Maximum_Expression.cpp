#include<bits/stdc++.h>
#define int long long 
using namespace std;
void solve()
{
    
    int n ;
    string s ; 
    cin>>n ; 
    cin>>s ; 
    string temp="" ; 
    string plusm = "" ; 
    for(int i = 0 ; i<n ; i++)
    {
        if(s[i]!='+'&& s[i]!='-')
        {
            temp+=  s[i] ; 
        }
        else 
        {
            plusm+= s[i] ; 
        }
     
    }
    sort(temp.begin(), temp.end() );
    sort(plusm.begin(),plusm.end());
    string ans = ""; 
    int nn = temp.size();
    int ss = plusm.size();
    int j=ss-1 ; 
    for(int i = 0 ; i<nn ; i++)
    {
        if(j>=0)
        {
            ans+=temp[i];
            ans+= plusm[j];
            j--;
        }
        else {
            ans+=temp[i];
        }
    }
    reverse(ans.begin(),ans.end());
      cout<<ans<<endl;
}

signed main()
{
int tc = 1 ;
cin>>tc ;
for(int i =1 ; i<=tc ; i++)
{
    solve();
}

     return 0 ;
    
}
    
    
