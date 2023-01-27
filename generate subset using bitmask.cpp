#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int subsize = 1<<n ; 
    int mask[subsize] ; 
    for(int i = 0 ; i< subsize ;  i++)
    {
        for(int j =  0 ; j<n ; j++)
        {
            if(mask[i]&1<<i!=0)
            {
                mask[i] = num[i] ; 
            }
        }
    }

    for(int i = 0 ; i<subsize ;  i++)
    {
        cout<<mask[i]<<endl;
    }

}



int main()
{
int t ;
cin>>t;
while(t--)
{
    int  n ;
    cin>>n ; 
    int num[n] ; 
    for(int i = 0 ; i<n ; i++)
    {
        cin>>num[i] ; 
    }
  solve()  ; 

}
    
    return 0 ;
}