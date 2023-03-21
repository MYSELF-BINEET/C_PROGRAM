#include <stdio.h>

void main()
{
    int rows, cols;
    printf("enter the rows : ");
    scanf("%d", &rows);
    printf("enter the cols : ");
    scanf("%d", &cols);
    int array1[rows][cols];
    int array2[rows][cols];

    int sum[rows][cols];
    printf("enter the element for array1 : ");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("input the element %d %d  : ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("enter the element for array2 : ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("input the element %d %d  : ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("\t%d" ,sum[i][j]);
           
        }
        printf("\n");
    }
}
