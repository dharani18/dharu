#include<iostream>
using namespace std;
int main()
{
	int i, n, sum=0, num;
	cout<<"How many number?";
	cin>>n;
	cout<<"Enter "<<n<<" number :";
	for(i=0;i<n;i++)
	{
		cin>>num;
		sum=sum+num;
	}
	cout<<"Sum of all the "<<n<<" number is "<<sum;
	return 0;
}
