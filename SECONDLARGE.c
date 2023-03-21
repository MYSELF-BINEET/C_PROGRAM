#include <stdio.h>

int secondsmall(int array[],int n);
int secondlarge(int array[],int n);

void main()
{
    int num;
    printf("enter the size of the array : ");
    scanf("%d", &num);

    printf("enter the element of the array :  ");

    int array[num];

    for (int i = 0; i < num; i++)
    {

        scanf("%d", &array[i]);
    }


    secondsmall(array,num);
    secondlarge(array,num);


}



int secondsmall(int array[],int n ){
    int idx ; 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
            idx=array[j];
            array[j]=array[j+1];
            array[j+1]=idx;
            }
        }
    }

    printf("the second largest number of the array is %d  ",array[1]);
}


int secondlarge(int array[],int n ){
    int idx ; 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
            idx=array[j];
            array[j]=array[j+1];
            array[j+1]=idx;
            }
        }
    }

    printf("the second largest number of the array is %d  ",array[n-2]);
}