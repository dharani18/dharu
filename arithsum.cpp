using namespacestd;
int main()
for (i = ft; abs (i) <= abs (maxValue); i = i + d)
    {
        sum = sum + i;
        
        if ((i) >= 0)
        {
             if (i != abs (maxValue))
             {
                   cout << setw(2);
                   if (i  < 0)
                           cout << i << " + ";
                   else if (i > 0)
                           cout << " + " << i;
             }
             else if (i = maxValue)
             {
                   cout << i << " = " << sum;
             }
        }
        else if ((i) <= 0)
        {
             if (i != maxValue)
             {
                   cout << " - " << abs (i);
             }
             else if (i = maxValue)
             {
                  cout << " - " << abs (i) << " = " << sum;
             }
        }
        
        return 0;
    }
