using namespacestd;
#include<iostream.h>
int main()
{
    const int arraysize=4;
    int array[arraysize]={2,5,8,3};
    auto it=std::find(array,array+arraysize,8);
    if(it>=array+arraysize)
    cout<<"not found"<<endl;
    else
    cout<<"element found"<<it-array<<endl;
    return 0;
}
