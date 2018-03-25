#include <iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;
 int a[n],k;
 for( i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cin>>k;
for (i=0;i<n;i++)
{
	
 if(k==a [i])
 {
 	count++;
 	}
}
    cout <<count;
 return 0;
}
