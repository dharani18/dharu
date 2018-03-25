#include <iostream>
using namespace std;
int main()
{
	int n,i,count;
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
 	if (count!=0)
 	{
    cout <<"yes";
 }
 else
 {
     cout<<"no";
 }
 return 0;
}
