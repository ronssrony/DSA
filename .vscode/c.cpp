#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   
  int t ; 
  cin>>t;
  while (t--)
{
    int n  ;
    cin>>n;
    int arr[n], temp;
    int k = 0;
    for (int i = 0  ; i<n ; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0 ; j<n; j++)
    {
       if (arr[j]<0)
       {
          if ( j!=k)
          {
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] =temp;
            k++;
          }
       }
       
    }
    for (int l = 0 ; l<n ; l++)
    {
        cout<<arr[l]<<" ";
    }

    

}
}