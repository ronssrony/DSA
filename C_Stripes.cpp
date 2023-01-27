#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
   
    char arr [8][8] ; 
    int ctr = 0 , ctb = 0 ;
    for(int i = 0; i<8 ; i++)
    {
        for(int j = 0 ; j<8 ; j++)
        {
            cin>>arr[i][j] ;
        }

    }
    for(int i = 0; i<8 ; i++)
    {
        for(int j = 0 ; j<8 ; j++)
        {
            if(arr[i][j]=='R')
            {
                ctr++;
            }
        }
        if(ctr==8)
        {
            cout<<"R"<<endl;
            break;
        }
        ctr = 0 ;

    }
   if(ctr!=8)
   {
    cout<<"B"<<endl;
   }
    


    
}
    
    return 0 ;
}