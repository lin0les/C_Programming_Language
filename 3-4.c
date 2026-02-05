/*
Exercise 3-4. In a two’s complement number representation, our version of itoa does not handle the largest negative number, that is, the value of n equal to −(2wordsize−1). Explain why not. Modify it to print that value correctly, regardless of the machine on which it runs.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char s[]);
void itoa(int n, char s[]);

int main(int argc, char *argv[])
{
    int n = -2147483648;
    char s[100];
    itoa(n, s);
    printf("%s\n", s);

    return 0;
}

void reverse(char s[])
{
    int len = strlen(s);
    char c; 
    for(int i = len - 1, j = 0; i > j; i--,j++)
    {
        c = s[j], s[j] = s[i], s[i] = c;
    }
}

void itoa(int n, char s[])
{
    int sign = n;
    int i = 0;

    do
    {
        s[i++] = abs(n % 10) + '0';   
    }
    while((n /= 10) != 0);

    if(sign < 0)
    {
        s[i++] = '-';
    }
    
    s[i] = '\0';
    reverse(s);
}

