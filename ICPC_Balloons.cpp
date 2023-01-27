#include<iostream>


using namespace std; 

int main()

{
   int t,n, a [100];


   cin>>t;

 while (t--)

 {   int count1=0, count2 = 0;  
     cin>>n ; 
     for ( int i = 1 ; i<=n ; i++)
     {
         cin>>a[i];
     }
     for ( int j = 1 ; j<=n ; j++)
     { 
         for (int k = 1 ; k<=7 ; k++)
         {
             if (a[j]== k)
             {
                 count1++;
                 
             }

         }
        
         count2 ++;
          if (count1==7)
                 {
                     break;
                 }
     }
     cout<<count2<<endl;


 }
   
   return 0 ;
}


