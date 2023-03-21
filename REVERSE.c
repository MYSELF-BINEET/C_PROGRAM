#include <stdio.h>


int reversearray(int array[],int n);
int printarray(int array[],int n);

void main()
{
    int num;
    printf("enter the array size : ");
    scanf("%d", &num);
    int array[num];
    printf("input the element of the array : ");

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    reversearray(array,num);
    printarray(array,num);
}


int reversearray(int array[],int n){
   
//    int firstval;
//    int lastval;
int idx;
    for(int i=0;i<n/2;i++){
        // firstval=array[i];
        // lastval=array[n-i-1];

        // firstval = array[n-i-1];
        // lastval=array[i];
        idx=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=idx;
    }
}

int printarray(int array[],int n){
    printf("the reverse array is : ");
    for(int i=0;i<n;i++){
        printf("%d  ",array[i]);
    }
}