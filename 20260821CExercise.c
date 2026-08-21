#include <stdio.h>
int main(void)
{
    int a = 0;
    scanf("%d", &a);
    int b = 0;
    if (a / 1000 > 0) {
        b = 4;
    } else if (a / 1000 < 0, a / 100 > 0) {
            b = 3;
    } else if (a / 100 < 0, a / 10 > 0) {
            b = 2;
    } else {
        b = 1;

    }
    printf("&d", b);
    return 0;

}