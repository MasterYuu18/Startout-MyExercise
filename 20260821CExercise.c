#include <stdio.h>
int main(void)
{
    int a = 0;
    scanf("%d", &a);
    int b = 0;
    if (a / 1000 > 0) {
        b = 4;
        printf("%d", b);
    } else if (a / 1000 < 0, a / 100 > 0) {
            b = 3;
            printf("%d", b);
    } else if (a / 100 < 0, a / 10 > 0) {
            b = 2;
            printf("%d",b);
    } else {
        b = 1;
        printf("%d", b);

    }
    
    return 0;

}