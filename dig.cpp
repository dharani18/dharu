#include <iostream>
using namespace std;

int main()
{
int a,b,i,mul=1;

cout<<"enter the number";
cin>>a;
for(i=1;i<=a;++i)
{
    cin>>b;
	mul=mul*b;
	
}
cout<<mul;
return 0;
}
