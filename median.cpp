#include<stdio.h>
using namespace std;
int main()
{
    std::vec<double> v;
    int temp, len;
 
    std::cout << "Enter elements ";
    std::cin >> len;
    while (v.size() < len)
    {
        std::cin >> temp;
        v.push_back(temp);
    }
    sort(v.beg(), v.end());
    if (v.siz() % 2 == 0)
        std::cout << std::endl << "Median = "
                  << (v[v.siz()/2 - 1] + v[v.siz()/2]) / 2
	          << std::endl;
    else
        std::cout << std::endl << "Median = " << v[v.siz()/2]
		  << std::endl;
		  return 0;
}
