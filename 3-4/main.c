#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char s[])
{
    int len = strlen(s);
    char c; 
    for(int i = len - 1, j = 0; i > j; i--,j++)
    {
        c = s[j], s[j] = s[i], s[i] = c;
    }
}

/* itoa:  convert n to characters in s */
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

int main(int argc, char *argv[])
{
    int n = -2147483648;
    char s[100];
    itoa(n, s);
    printf("%s\n", s);

    return 0;
}

