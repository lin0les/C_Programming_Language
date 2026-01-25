/*
Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
*/

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(){
    printf("%u\n", setbits(127, 5, 2, 100));

    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y){
    // x de deyisheceyimiz bitlerin yerine uygun maska hazirliyiriq
    unsigned mask = ~(~0 << n) << (p - n + 1);

    // x de deyisheceyimiz bitleri maskanin tersi ile 0 layiriq
    x = x & ~mask;

    // y in son n bitini sechiriy
    y = (y & ~(~0 << n));

    // y in son n bitini x de deyishecey movqeye apariq
    y = y << (p - n + 1);

    // return x or y etdikde yalniz x in 0 lari y in 1 leri ile deyishir
    return x | y;
}
