#include <stdio.h>

void main(){
    int i, j, k, num, m = 1;
    printf("enter the number : ");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= m; k++)
        {
            printf("* ");
        }
        printf("\n");
        m++;
    }
}