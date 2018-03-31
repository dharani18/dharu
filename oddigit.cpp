#include<iostream>
using namespace std;
int main()
{
int a, n;
cout<<"enter the values";
cin>>a;
while(a!=0)
{
n=a%10;
a/=10;
if(n%2!=0)
{

cout<<n<<" "; 
return 0;
}
}
} 
