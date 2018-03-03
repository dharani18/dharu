using namespacestd;
#include<iostream.h>
#include<conio.h>

int main()
{
int no,a=0;
clrscr();
cout<<"Enter num : ";
cin>>no;
while(no>0)
{
no=no/10;
a++;
}
cout<<"\n no. of digits are: "<<a;
return 0;
}
