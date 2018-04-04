#include <iostream>
using namespace std;
class composite

{
    int i,n,count=0;
    public:
    void calculate()
    
    {
        cout<<"enter the number";
        cin>>n;
        for(i=2;i<n;i++)
        
        {
            if(n%i==0)
            
            {
                count++;
                break;
                
            }
        
        }
    }
    
    public:
    void display()
    
    {
        if(count==1)
        
        {
            cout<<"it is composite";
        }
        
        else
        
        {
            cout<<"no";
        }
    
        
    }
}
int main()
{
    composite a;
    a.calculate();
    a.display();

    return 0;
}
