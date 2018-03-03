#include <iostream>

using namespace std;

char StringLength (char c)
{
    char count[256];
    int size = 0;

    for ( c != 0; ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ; c++ )
    {
    size += count[c];
    }
    return size;
}
int main()
{
    char c;
    int size = 0 ,length;
    cout << "Enter string : ";
    cin >> c;
    size = StringLength (c);
    cout << "The number of characters: " << size << endl;
    return 0;
}
