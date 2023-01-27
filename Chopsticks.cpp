#include<bits/stdc++.h>
using namespace std;
int main()
{

    bool loopp = true ; 
    int n , d , tmp ,cnt=0 ;
    cin>>n>>d ;
    int arr[n];
    for(int i = 0 ; i<n  ;i++)
    {
        cin>>arr[i];
    } 
    sort(arr,arr+n) ; 
    tmp  = arr[n-1];
	for(int i=n-2;i>=0;i--){
	    if(tmp - arr[i] <= d){
	        cnt++;
	        i--;
	        tmp = arr[i];
	    }
	    else{
	        tmp = arr[i];
	    }
	}
	cout<<cnt<<endl;

    
    return 0 ;
}