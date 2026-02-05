/*
Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0−9 and -a-z. Arrange that a leading or trailing - is taken literally.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void expand(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    char c;
    
    while((c = s1[i]) != '\0')
    {
        if(s1[i+1] == '-' && s1[i+2] >= c)
        {
            i = i + 2;
            
            while(c <= s1[i])
            {
                s2[j] = c;
                ++c;
                ++j;
            }
        }
        else
        {
            s2[j] = c;
            ++j;
        }
        ++i;
    }
    s2[j] = '\0';
}

int main(int argc, char *argv[])
{
    char s1[100] = "-a-g1-5Nihad-";
    char s2[100];

    expand(s1, s2);
    printf("%s\n", s2);

    return 0;
}

