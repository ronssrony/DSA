#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n ;
    bool pytha = false ;  
    cin>>n ; 
    int sq  = sqrt(n);  
    for(int i = 1 ; i<=sq; i++)
    {
         int N = n-(i*i) ; 
         int Ns = sqrt(N) ; 
         int res = Ns*Ns ; 
         if(res == N)
         {
            cout<<Ns<<" "<<i<<endl;
            pytha=true ; 
            break ; 
            
         }
         
         
    }
    if(pytha == false)
    {
        cout<<"-1"<<endl;
    }

}
    
    return 0 ;
}