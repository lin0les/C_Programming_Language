/*
Exercise 2-4. Write an alternate version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.
*/

/*
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != ′\0′; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = ′\0′;
}
*/

#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main(){
    char s1[] = "nihad";
    char s2[] = "fidan";
    printf("Before changes:\n");
    printf("%s\n%s\n", s1, s2);

    squeeze(s1, s2);
    printf("\nAfter changes:\n");
    printf("%s\n%s\n", s1, s2);

    return 0;
}

void squeeze(char s1[], char s2[]){
    int i, j, k;
    k = 0;
    for(i = 0; s1[i] != '\0'; ++i){
        int isDiff = 1;
        for(j = 0; s2[j] != '\0'; ++j){
            if(s1[i] == s2[j]){
                isDiff = 0;
            }
        }
        if(isDiff)
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}
