#include<iostream>
using namespace std;
int main()
{
    float width, length, height;
    float surfacearea, volume, space_diagonal;
    cout<<"enter value of width,length ,height";
    cin>>width>>length>>height;
    surfacearea = 2 *(width * length + length * height +
    height * width);
    volume = width * length * height;
    cout<<"Surface area of cuboids is"<< surfacearea;
    cout<<"\n Volume of cuboids is << volume;
    return 0;
}
