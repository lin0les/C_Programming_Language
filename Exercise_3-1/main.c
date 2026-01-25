#include <stdio.h>

#define LIM 10

int binsearch(int x, int v[], int n)
{
    int low = 0, high = n - 1, mid;
    mid = (low + high) / 2;

    while (low <= high && x != v[mid])
    {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;

        mid = (low + high) / 2;
    }
    if(x == v[mid])
        return mid;
    return -1;
}
int main(int argc, char *argv[])
{
    int numbers[LIM] = {1, 6, 72, 123, 126, 170, 179, 259, 561, 1610};
    printf("%d\n", binsearch(123, numbers, LIM));

    return 0;
}

