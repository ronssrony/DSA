#include<iostream>

using namespace std;

int main()
{
    int t , n , m  ;
    cin>>t;
    while(t--)
    {
       cin>>n>>m ; 
       int arr[n];
      int  count =0;
       for (int i = 1 ; i<=n ; i++)
       {
           cin>>arr[i];
       }
      for (int j = 1 ; j<=n ; j++)
    {
        for (int k = j+1 ; k<=n-1 ; k++)
        {
            if (arr[j]<arr[k])
            {
                count ++;
            }
            else if ( arr[j]>arr[k])
            {
                count++;
            }
        }
    }
     if (count == m)
     (
         cout<<"NO"<<endl;
     )

    }
return 0;

}
