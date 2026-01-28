#include <stdio.h>
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
    int i, sign;

    if ((sign = n) < 0)  /* record sign */
        n = -n;          /* make n positive */
    i = 0;
    do {       /* generate digits in reverse order */
        s[i++] = n % 10 + '0';   /* get next digit */
    } while ((n /= 10) > 0);     /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

int main(int argc, char *argv[])
{
    int n = 123516;
    char s[100];
    itoa(n, s);
    printf("%s\n", s);

    return 0;
}

