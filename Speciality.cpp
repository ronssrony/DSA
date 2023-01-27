#include <iostream>
using namespace std;

int main() {
int t ; 
cin>>t ; 
while(t--)
{
    int c = 0 ;
    string s ;
    cin>>s ;
    for(int i = 0 ; i<s.length() ; i++)
   {
      if((s[i]=='a') ||  (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i] == 'u'))
      {
        
        c++ ; 
        if(c>2)
        {
            cout<<"Happy"<<endl;
            break;
        }
        else 
        {
            c == 0 ;
        }
      }
   }
}
	return 0;
}
