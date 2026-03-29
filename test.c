#include <stdio.h>

#define func(x) ((x)*(x))


int main(int argc, char *argv[])
{
    int a, b;
    a = func(5 + 2);
    printf("%d\n", a);

    return 0;
}

