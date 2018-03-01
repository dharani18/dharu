using namespace std;

int main()
{
    int n;

    cout << "Enter  number ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}
