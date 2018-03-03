
#include <iostream>
using namespace std;

int main()
{
	int counter, number, largest;
	counter = 1;

	cout << "Enter a number: ";
	cin >> largest;

	while ( counter < 10 ) {
		cout << "Enter next number: ";
		cin >> number;

		if ( number > largest )
			largest = number;
		counter++;
	}

	cout << "The largest number : " << largest << endl;
  return 0;
}
