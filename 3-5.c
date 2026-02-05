/*
Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b character representation in the string s. In particular, itob(n,s,16) formats n as a hexadecimal integer in s.
*/

#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void itob(int n, char s[], int b);

int main(int argc, char *argv[])
{
    int x = 32414;
    char s[15];
    int b = 16;
    itob(x, s, b);
    printf("The number %d in base %d is %s\n", x, b, s);
    
    return 0;
}

void reverse(char s[])
{
    int i, j, c;
    for(int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itob(int n, char s[], int b)
{
    int sign = n;
    if(sign < 0)
    {
        n = -n;
    }

    int i = 0;
    do
    {
        int digit = n % b;
        
        if(digit <= 9)
        {
            s[i++] = digit + '0';
        }
        else
        {
            s[i++] = digit + 'A' - 10;
        }
    }
    while(( n /= b) > 0);

    if(sign < 0)
    {
        s[i++] = '-';
    }

    s[i] = '\0';
    reverse(s);
}
