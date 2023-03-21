#include <stdio.h>

void main()
{
    int num;
    printf("enter the size of the array : ");
    scanf("%d",& num);
    int array[num];

    printf("enter the array element : \n");

    for (int i = 1; i < num; ++i)
    {
        printf("input the element for %d : ", i);
        scanf("%d", &array[i]);
    }

    int small = array[0];
    int large = array[0];

    for (int i = 1; i < num; i++)
    {
        if (small > array[i])
        {
            small = array[i];
        }

        if (large < array[i])
        {
            large = array[i];
        }
    }


    printf("the smallest number is %d  \n",small);
    printf("the largest number is  %d  \n",large);

}