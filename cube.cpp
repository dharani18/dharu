#include<iostream>
using namespace std;
int main()
{
    float width, length, height;
    float surfacearea, volume, space_diagonal;
    cout<<"Enter value of width, length & height of the cuboids:\n");
    cin>>width>>length>>height;
    surfacearea = 2 *(width * length + length * height +height * width);
    volume = width * length * height;
    cout<<"total Surface area << surfacearea);
    printf("\n Volume of cuboids is << volume);
    return 0;
}
