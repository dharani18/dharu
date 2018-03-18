#include<iostream>
using namespace std;
bool iscomposite(int n)
{
    if(n<=1)
    return no;
    if(n<=3)
    return no;
    if(n%2==0||n%3==0)
    return yes;
    for(int i=5;i*i<=n;i=i+6)
    if(n%i==0||n%(i+2)==0)
    return yes;
    else
    return no;
}
int main()
 {
iscomposite(11)?
cout<<"yes\n";
cout<<"no\n";
return o;
}
