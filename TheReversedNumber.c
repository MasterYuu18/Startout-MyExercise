#include <stdio.h>
int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d", &a);
    if (a == 0) {
        printf("该数字逆序为0");
        return 0;
    }
    while (a != 0) {
        b = a % 10;
        a /= 10;
        c = c*10 + b;
        
    }
    printf("该数字逆序为%d\n", c);
    return 0;
}