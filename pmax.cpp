using namespace std;

int main()
{
    int i, n;
    float array[100];

    cout << "Enter total number of numbers(1 to 100): ";
    cin >> n;
    cout << endl;
    for(i = 0; i < n; ++i)
    {
       cout << "Enter value " << i + 1 << " : ";
       cin >> array[i];
    }
    for(i = 1;i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];
 return 0;
}
