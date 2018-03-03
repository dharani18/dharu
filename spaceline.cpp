#include<stdio.h>

int main()
{
    int count = 0;
    std::string line;
    std::ifstream file("main.cpp");
 
    while (getline(file, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ' || line[i] == '\t')
                count++;
        }
    }
    std::cout << "Number of spaces"<< count << "\n.";
    return 0;
}
