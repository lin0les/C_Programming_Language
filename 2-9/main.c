/*
Exercise 2-9. In a two’s complement number system, x &= (x−1) deletes the rightmost 1-bit in x. Explain why. Use this observation to write a faster version of bitcount.
*/

#include <stdio.h>

int bitcount(unsigned x); 

int main(){
    printf("%b\n", 10101);
    printf("%d\n", bitcount(10101));
    return 0;
}

int bitcount(unsigned x) {
    int b = 0;
    while (x != 0) {
        x &= (x - 1);  // en sag bit silinir
        b++;           // say artir
        printf("%b\n", x);
    }
    return b;
}

