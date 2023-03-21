#include <stdio.h>
int bubblesort(int array[], int n);
int printsort(int array[], int n);

void main()
{
    int num;
    printf("enter the size of array : ");
    scanf("%d", &num);
    int array[num];
    printf("input the element of array : ");
    for(int i=0;i<num;i++){
        scanf("%d",&array[i]);
    }

    bubblesort(array,num);
    printsort(array,num);
}

int bubblesort(int array[], int n)
{
    int idx;
    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                idx = array[j];
                array[j] = array[j + 1];
                array[j + 1] = idx;
            }
        }
    }
}

int printsort(int array[], int n)
{
    printf("the sorted array is : ");
    for(int i =0;i<n;i++){
        printf("%d  ",array[i]);
    }
}