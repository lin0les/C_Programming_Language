/*
Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third argument is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char s[]);
void itoa(int n, char s[], int w);

int main(int argc, char *argv[])
{
    int w = 15;
    int n = -2147483648;
    char s[100];
    itoa(n, s, w);
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

void itoa(int n, char s[], int w)
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

    while(i < w)
    {
        s[i++] = ' ';
    }
    
    s[i] = '\0';
    reverse(s);
}

