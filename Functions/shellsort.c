#include <stdio.h>

#define N 7

/* shellsort:  sort v[0]...v[n−1] into increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}

int main(int argc, char *argv[])
{
    int arr[N] = {5,12,1,6,71,7,125};
    shellsort(arr, N);
    for(int i = 0; i< N; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

