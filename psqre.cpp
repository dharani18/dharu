#include <iostream>

using namespace std;

int main()
{
 int a,b,set = 0;
 
 cout<<"enter numbers";
 cin>>a>>b;
 
 a *= b;
 for(int i = 0;i <= a;i++)
 {
     int j = i * i;
     if(j==a)
     {
         set = 1;
         break;
     }
 }
 
 if(set == 1)
 {
     cout<<"yes";
 } else
 {
     cout<<"no";
 }
    return 0;
}
