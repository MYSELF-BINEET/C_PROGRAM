#include<stdio.h>

int searcharray(int array[],int rows , int cols ,int idx);


void main(){
    int rows,cols;
    printf("enter the rows : ");

    scanf("%d",&rows);

    printf("enter the coloumns : ");

    scanf("%d"&cols);

    int number;
    printf("enter the  number : ");
    scanf("%d",&number );

    int array[rows][cols];

    for(int i=0;i<rows;i++){
        for(iunt j=0;j<cols;j++){
            printf("input the element for %d  %d ",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    searcharray(array,rows,cols,number);

}


int searcharray(int array[],int rows ,int cols,int idx ){ 
    for(int i=0;i<rows;i++){
        for(int j =0;j<cols;j++){
            if(idx==array[i][j]){
                printf("find the number in %d  %d ",i,j);
            }
        }
    }
}
