#include <stdio.h>

#define LIM 10

/* binsearch:  find x in v[0] <= v[1] <= ... <= v[n−1] */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else    /* found match */
            return mid;
    }
    return -1;    /* no match */
}

int main(int argc, char *argv[])
{
    int numbers[LIM] = {1, 6, 72, 123, 126, 170, 179, 259, 561, 1610};
    printf("%d\n", binsearch(123, numbers, LIM));

    return 0;
}

