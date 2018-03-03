#include <iostream>
using namespace std;

int main()
{
 char str1[]="hai";
 char str2[]="hai";
 int ret;
 ret=compareStrings(str1,str2);
 if(ret==0)
 cout<<"hai"<<endl;
 else if(ret==1)
 cout<<"str1 is bigger"<<endl;
 else
 cout<<"str2 is bigger"<<endl;
 return 0;
}
