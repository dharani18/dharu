
using namespace std;

int main(){
    char str[10];
    int i, l;
    int flag = 0;
     cout << "Enter a string: "; 
    cin>>str;
     l= strlen(str);
    
    for(i=0;i < l ;i++){
        if(str[i] != str[l-i-1])
        {
            flag = 1;
            break;
   }
} if (flag)
{
        cout << str<< " is not a palindrome" << endl; 
    }    
    else {
        cout << str << " is a palindrome" << endl; 
    }
    return 0;
}
