/* 
Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
*/

#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(){
    printf("%b\n", 10101);
    printf("%b\n", invert(10101, 7, 4));

    return 0;
}

unsigned invert(unsigned x, int p, int n){
    // deyishen hisse uchun 1 lerden ibaret maska yaradiriq
    unsigned mask = ~(~0 << 4) << (p + 1 - n);

    // xor da 0lar hecneyi deyishmir, 1 ler ise qarshi terefi invert edir.
    return x ^ mask;
}
