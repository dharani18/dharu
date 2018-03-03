int main()
{
    char    str[100];
    int countSpecialChar;
    int counter;
    countSpecialChar=0;
 
    printf("Enter string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
            countSpecialChar++;
    }
 
    printf("\nSpecial Characters: %d \n countSpecialChar);
   return 0;
}
