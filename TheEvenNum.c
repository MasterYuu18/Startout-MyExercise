#include <stdio.h>
int main (void) 
{
    int num = 0;
    int sum = 0;
    int count = 0;
    scanf("%d", &num);
    if (num == -999999) {
        printf("该值为终止值，请重新输入！\n");
        return 0;
    }
    while (num != -999999) {
        sum += num;
        count ++;
        scanf("%d", &num);
    }
    printf("%f", 1.0*sum/count);
    return 0;
}