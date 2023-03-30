#include <stdio.h>
#include <conio.h>
int main(){
   int A[10][10], B[10][10];
   int i, j, R1, C1, R2, C2, flag =1;
   printf("Enter the order of the matrix A");
   scanf("%d %d", &R1, &C1);
   printf("Enter the order of the matrix B");
   scanf("%d %d", &R2,&C2);
   printf("Enter the elements of matrix A");
   for(i=0; i<R1; i++){
      for(j=0; j<C1; j++){
         scanf("%d",&A[i][j]);
      }
   }
   printf("Enter the elements of matrix B");
   for(i=0; i<R2; i++){
      for(j=0; j<C2; j++){
         scanf("%d",&B[i][j]);
      }
   }
   printf("MATRIX A is");
   for(i=0; i<R1; i++){
      for(j=0; j<C1; j++){
         printf("%3d",A[i][j]);
      }
      printf("");
   }
   printf("MATRIX B is");
   for(i=0; i<R2; i++){
      for(j=0; j<C2; j++){
         printf("%3d",B[i][j]);
      }
      printf("");
   }
   /* Comparing two matrices for equality */
   if(R1 == R2 && C1 == C2){
      printf("Matrices can be compared");
      for(i=0; i<R1; i++){
         for(j=0; j<C2; j++){
            if(A[i][j] != B[i][j]){
               flag = 0;
               break;
            }
         }
      }
   }
   else{
      printf(" Cannot be compared");
      
   }
   if(flag == 1 )
      printf("Two matrices are equal");
   else
   printf("But,two matrices are not equal");
}