#include<stdio.h>

int issparseMatrix(int  mat[][100],int rows,int cols){
    int countNonZeros =0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]!=0){
                countNonZeros++;
            }
        }
    }
   return (countNonZeros<(rows*cols)/2);
}

void displaysparsematrix(int mat[][100],int rows,int cols){
    printf("3-tuples form of sparse matrix \n");
    printf("row\tcoloumn\tvalue\n");

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]!=0){
                printf("%d\t%d\t%d\n",i,j,mat[i][j]);
            }
        }
    }
}

void transposeMatrix(int mat[][100],int rows ,int cols){
    int transmat[100][100];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transmat[j][i]=mat[i][j];
        }
    }

    printf("transpose the matrix\n");

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",transmat[i][j]);
        }
        printf("\n");
    }
}

int main(){
int rows,cols;
int matrix[100][100];

printf("enter the rows:");
scanf("%d",&rows);
printf("enter the coloumns :");
scanf("%d",&cols);

printf("enter the elements of the matrix : ");

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        scanf("%d",&matrix[i][j]);
    }
}


if(issparseMatrix(matrix,rows,cols)){
    printf("this is a sparse matrix \n");
    displaysparsematrix(matrix,rows,cols);
    transposeMatrix(matrix,rows,cols);

}else{
    printf("this is not sparse matrix \n");
}
}