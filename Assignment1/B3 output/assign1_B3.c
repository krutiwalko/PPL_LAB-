#include <stdio.h>
int main()
{
    int a, b;
    for (a=4; a<100; a++) {
        if (a < a)
            b = b + 2;
        else
            b = b * 2;
    }
    printf ("%d%d", a, b);
}
