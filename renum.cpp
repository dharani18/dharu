#include <iostream>

using namespace std;

int main()
{
int num, rev=0, rem;
	cout<<"Enter number : ";
	cin>>num;
	while(num!=0&&num<1000)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	
cout<<rev;	

    return 0;
}
