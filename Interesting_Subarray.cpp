#include<bits/stdc++.h>


using namespace std;
int main()
{
int t  ; cin>>t ; 
while (t--)
{ 
    int n  ; cin>> n ; 
    long long  arr[n];
    for (int i = 0  ; i< n ; i++)
    {
        cin>>arr[i];
    }
  sort(arr,arr+n);
 long long maximum , minimum , x , y ,z;
 maximum =arr[n-1];
 minimum = arr[0];
 
if (minimum>=0)
{
   cout<<minimum*minimum<<" "<<maximum*maximum<<endl;
}
else {
       x= max(arr[0]*arr[0],arr[n-1]*arr[n-1]);
       z=arr[n-1]*arr[0];
       y=min((arr[0]*arr[0]),(arr[n-1]*arr[n-1]));
       y=min(y,z);
       cout<<y<<" "<<x<<endl;
}
}
return 0 ;
}