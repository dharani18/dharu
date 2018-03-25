#include <iostream>
using namespace std;
int main()
{
	int n,i,z;
	cin>>n;
 int a[n],k;
 for( i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cin>>k;
z=(k*2)-1;
 if(k<=(n+1)/2)
 {
 	cout <<a [z-1];
 	}
 	else
 	{
 		cout <<"invalid number";
 	}
 return 0;
}
