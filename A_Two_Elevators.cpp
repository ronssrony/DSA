#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t ; cin>>t;
    long long a,b,c,x,y ;
    while (t--)
    {
        int  count= 0;
        cin>>a>>b>>c;
        if (a==1)
        {
            x = 1 ;
        }
        else
        {
            x = a-1 ;
        }
        if (b>c)
        {
            y = b-c ;
        }
        else
        {
            for (int i = b ; i<c ; i++)
            {
                count++;
            }
            for(int j = c ; j>1 ; j--)
            {
                count++;
            }
            y = count ;
        }
        if (x<y)
        {
            cout<<"1"<<endl;
        }
        else if (x == y)
        {
            cout<<"3"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
 
        }
 
    }
   return 0 ;
}