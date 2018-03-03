#include <iostream>
using namespace std;

int main()
{
        int index = 0;
        int index2 = 0;
        const int SIZE = 10;

        char frstStringObj[SIZE], scndStringObj[SIZE], concatString[50]={'0'};

        cout<<"Enter frst String: ";
        cin>>frstStringObj;

        cout<<"Enter scnd String: ";
        cin>>scnddStringObj;

        while(frstStringObj[index] != '\0')
        {
             concatString[index] = frstStringObj[index];
             index++;
            }

        while(scndStringObj[index2] != '\0')
        {
              index++;
              concatString[index] = scndStringObj[index2];
              index2++;
            }

         cout<<"\n\n\nConcatenated String: ";
            for(int j=0;j<SIZE+SIZE;j++)
                cout<<concatString[j];
         cout<<"\n\n\n";
    return 0;
}
