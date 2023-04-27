#include<stdio.h>

void insertionsort (int arr[],int n);
void printsort(int arr[],int n );

void main(){

    int size ;
    printf("enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];

    int n=sizeof(arr)/sizeof(arr[0]);

    printf("enter the element of the array : ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    insertionsort(arr,n);
    printsort(arr,n);

}

void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j =i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void printsort(int arr[],int n ){
    printf("the sorting array is : ");
    for(int i =0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}

