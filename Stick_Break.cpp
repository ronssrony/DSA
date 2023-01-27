#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n , k , i= 0  ; 
    bool br = false ; 
    cin>>n>>k ;
    int arr[k]={0} ; 
        while(1)
        {

            arr[i] +=  1 ; 
           
            i++ ; 
            if(i = k)
            {
             i = 0;
            }
           
            if(n==0)
            {
                break;
            } 
            
            n-- ; 
        }
         
        for(int i = 0 ; i<k ; i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<< n ; 
}
    
    return 0 ;
}