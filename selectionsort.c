#include<stdio.h>
void selectionsort(int arr[],int n);
void printsort(int arr[],int n );

void main(){
    int size;
    printf("enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("enter the element of the array : ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    printsort(arr,n);
}

void  selectionsort(int arr[],int n ){
    int idx;
    for(int i =0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_idx]>arr[j]){
                min_idx=j;
            }
        }
        if(min_idx!=i){
            idx=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=idx;
        }
    }
}

void printsort(int arr[],int n ){
    printf("the sorting element is : ");
    for(int i =0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}