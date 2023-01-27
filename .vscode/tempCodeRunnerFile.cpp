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

    for (int i = 0  ; i<n ; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0 ; j<n ; j++)
    {
        for (int k = j+1 ; k<n ; k++)
        {
            if (arr[j]>=arr[k])
            {
                temp = arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for (int l = 0 ; l<n ; l++)
    {
        cout<<arr[l]<<" ";
    }

    

}
}