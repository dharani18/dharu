#include<iostream>
using namespace std;
int main()
{
int testBinary(int number)
{
	int dv;
	cout<<"enter number:";
	cin>>number;
	while(number!=0)
	{
		dv=number%10;
		if(dv>1)
			return no;
		number=number/10;
	}
	return yes;
}
}
