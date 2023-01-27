#include <iostream>
using namespace std;

int main() {
	int t ; 
	cin>>t;
	int a , x , b , y ; 
	while (t--)
	{
	    cin>>a>>x>>b>>y;
	    int alice = a/x ; 
	    int bob = b/y;
	    if(alice<bob)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else if (alice>bob)
	    {
	        cout<<"Alice"<<endl;
	    }
	 else if (alice == bob)
	    {
	        cout<<"Equal"<<endl;
	    }
	}
	
}
