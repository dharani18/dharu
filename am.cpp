
using namespace std;

int main()
{
  int onum, num, rem, sum = 0;
  cout << "Enter a positive  integer: ";
  cin >> onum;

  num = onum;

  while(num != 0)
  {
      d = num % 10;
      sum += d * d * d;
      num /= 10;
  }

  if(sum == onum)
    cout << origNum << " yes.";
  else
    cout << origNum <<"no";

  return 0;
}
