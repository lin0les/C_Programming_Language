/*
Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n bit positions.
*/

#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main(){
    printf("%b\n", 10101);
    printf("%b\n", rightrot(10101, 3));

    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    // x-in bit sayı
    int w = sizeof(x) * 8;       

    /* 1) saga n bit shift */
    unsigned right = x >> n;

    /* 2) sagdan chixan n bit sola (w - n) qeder */
    unsigned left = x << (w - n);

    /* 3) birinci ve ikinci hissesin birleshmesi */
    return right | left;
}
