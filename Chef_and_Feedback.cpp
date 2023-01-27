#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    string a;
    cin>>a ;
    int count = 0 ;  
    int n = a.length();
    for(int i = 0 ; i<n ; i++)
    {
        if(a.substr(i , 3)=="101"||a.substr(i,3)=="010")

        {
            count++;
            i = i+3 ; 
        }
        
    }
    if(count>=1)
    {
        cout<<"Good"<<endl;
    }
    else 
    cout<<"Bad"<<endl;
}
    
    return 0 ;
}