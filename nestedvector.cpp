#include<bits/stdc++.h>
using namespace std;
void printvecpair(vector< pair <int,int> > v)
{
     for(int i = 0  ;i<v.size() ; i++)

     {
          cout<<v[i].first<<" "<<v[i].second<<endl;
     }
}
void printvecarray(vector< int > v)
{
     for(int i = 0  ;i<v.size() ; i++)

     {
          cout<<v[i]<<" ";
     }
     cout<<endl;
}

int main()
{
   //PAIR OF VECTOR
   vector<pair <int,int> >v; 
   int n ; 
   cin>>n ; 
  for(int i = 0 ; i<n ;i++)
  {
     int x , y  ; 
     cin>>x>>y ; 

     v.push_back({x,y}); 

  }
  printvecpair(v) ; 

  //ARRAY OF VECTOR 

  vector<int>v1[10] ; 
  int N; 
  cin>>N ; 
  for(int i=0 ; i<N ; i++)
  {
     int n;  
     cin>>n ; 
     for(int j = 0; j<n;  j++)
     {
          int x; 
          cin>>x;
          v1[i].push_back(x);
     }
  } 
  for(int i = 0; i<N;  i++)
  {
     printvecarray(v1[i]) ; 
  }

//vector of vector 
vector < vector<int> > v2 ; 
int X; 
cin>>X ; 
for(int i = 0 ; i<X ; i++)
{
     int a ; 
     cin>>a ; 
     vector<int>temp ;
     for(int i =0 ; i<a ; i++)
     {
          int z ;  
          cin>>z ; 
          temp.push_back(z);
     }
     v2.push_back(temp); 
    
}
  for(int i = 0 ; i<X ; i++)
  {  
     printvecarray(v2[i]) ; 

  }

     
     return 0 ;
}