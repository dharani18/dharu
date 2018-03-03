#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
  int value = atoi(argv[1]);
  bitset<NUMSIZE> org  (value);
  cout << "Original Number " << org.to_ulong() << " is " << org << endl
  bitset<NUMSIZE> nxt(value);
  higher(0, 1, 1);
  cout <"nxt number  " << nxt.to_ulong() << nxt << endl;
 return 0; 
}
