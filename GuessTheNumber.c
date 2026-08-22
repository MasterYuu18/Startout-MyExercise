#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(0));
    int num = rand()%100+1;
    int count = 0;
    int x = 0;
    printf("请输入一个1到100内的整数：\n");
    do {
        scanf("%d", &x);
        count ++;
        if (x > num) {
            printf("你猜大了\n");
        } else if (x < num) {
            printf("你猜小了\n");
        }
    } while (x != num);
    printf("你猜对了！总共猜了%d次。\n",count);
    return 0;
}
