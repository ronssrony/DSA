
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t ;
cin>>t;
while(t--)
{
    int wand = 0 , ctr = 1 ;
    string door ;
    cin>>door;
  for (int i = 0; i < door.length(); i++) {
	if (door[i] - '0' != ctr) {

    	  wand += 1;
		  ctr ^= 1;
		}
	}
    
    cout<<wand<<endl;
     }

return 0 ;
   }
   