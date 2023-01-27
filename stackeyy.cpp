#include<bits/stdc++.h>
#define n 50 ; 
using namespace std;


class stack{
       int *arr ; 
       int top  ;
       public :
       stack()
      {
        arr = new int [n] ; 
        top  = -1 ; 
      }
      void push (int x)
      
       {
           if(top==n-1)
         {
            cout<<"Stack is overflow"<<endl;
            return ; 
         }
         top++ ;
         arr[top] = x ;
       }
       void pop() 
        {
            if(top==-1) 
            {
                cout<<"The stack is empty"<<endl;
                return   ;
            }
           top--  ;
        }
        int Top()
        {
            if(top==-1)
            {
                cout<<"The stack is empty"<<endl;
                return -1 ;
            }
            return arr[top] ; 

        }
        bool empty()
        {
            return top==-1 ;
        }





};
int main()
{
    
    
    return 0 ;
}