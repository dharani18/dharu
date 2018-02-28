#include<stdio.h>

int main() 
  {
   int b,p,i,pow=1;
   clrscr();
   cout<<"Enter value of b and p: ";
   cin>>b>>p;
   for(i=p;i>0;i--)
   {
   pow=pow*b;
   }
   cout<<"power is: "<<pow;
  }
}
