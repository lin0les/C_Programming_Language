/*
Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape sequences into the real characters.
*/

#include <stdio.h>

void escape(char *s, char *t);

int main(int argc, char *argv[])
{
    int i = 0;
    char c;
    char s[16];
    char t[32];

    while((c = getchar()) != EOF)
    {
        s[i++] = c;
    }

    escape(s, t);

    return 0;
}

void escape(char *s, char *t)
{
    int i, j;
    
    for(i = j = 0; *(s + i) != '\0'; i++)
    {
        switch(*(s + i))
        {
            case '\t': 
                *(t + j++) = '\\';
                *(t + j++) = 't'; 
                break;
            case '\n': 
                *(t + j++) = '\\';
                *(t + j++) = 'n'; 
                break;
            default: 
                *(t + j++) = *(s + i); 
                break;
        }
    }

    printf("S: %s\t\tT: %s\n", s, t);
}
