#include<stdio.h>
int main(){
    int a;
    printf("enter the length of array :- ");
    scanf("%d",&a);
    int arr[a];
    printf("\nenter the unsorted array to sort :- ");
    for(int i=0;i<a;i++){
        printf("\nEnter the value at index %d :- ",i);
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<=a-1;i++){
        for(int j=0;j<=a-i-1;j++){
            if(arr[i]<arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

 printf("\nenter the sorted array if :- ");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
        

    }   
return 0;
}