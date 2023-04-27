#include<stdio.h>

void bubblesort(int arr[],int n);
void printsort(int arr[],int n);

void main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];

    printf("enter the element of the array : ");

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }

    int n =sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printsort(arr,n);

}

void bubblesort(int arr[],int n ){
    int idx ;
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                idx = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=idx;

            }
        }
    }

}

void printsort(int arr[],int n){
    printf("the sorting element is : ");
    for(int i =0;i<n;i++){
        printf("%d   ",arr[i]);
    }
}