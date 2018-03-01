using namespace std;

int main()
{
    unsigned int n;
    unsigned long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <=n; ++i)
    {
        fact *= i;
    }

    cout << "Factorial of " << n << " = " << fact;    
    return 0;
}
