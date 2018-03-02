using namespace std;
 
int main()
{
    int count = 0;
    string line;
    ifstream file("main.cpp");
    while (getline(file, line))
        count++;
 
    cout << "Numbers of lines : " << count << endl;
    return 0;
}
