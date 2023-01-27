#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n  ; 
    int cnt=0 , ctt=0 ; 
    cin>>n ; 
    int arr[n] ; 
    vector<int>v ;
    for(auto i = 1; i<=n; i++)
    {
        cin>>arr[i] ;
    }
    for(auto i = 1 ; i<=n ; i++)
    {
        if(arr[i]&1)
        {
            cnt++ ;
            
            
        }
        else 
        {
            ctt++ ;
            
           
        }
    }
   if(cnt>=3)
   {
       for(int i = 1 ; i<=n ; i++)
      {
        if(arr[i]&1)
        {
            v.push_back(i) ;
        }
      }
      cout<<"YES"<<endl;
      for(auto value :v)
      {
        cout<<value<<" ";
      }
      cout<<endl;
   }
   else if(ctt>=2 && cnt>=1)
   {    
       cnt = 1 ;
       ctt = 2 ;
      for(int i = 1 ; i<=n ; i++)
      {
        if((arr[i]&1) && cnt)
        {
            v.push_back(i);
            cnt-- ;
            
        }
        else if ((arr[i]&1==0) && ctt) 
           
            {
                v.push_back(i) ;
                ctt--;
            }
      }
        
      cout<<"YES"<<endl;
      for(auto value :v)
      {
        cout<<value<<" "; 
      }
     cout<<endl;
   }


}
    
    return 0 ;
}