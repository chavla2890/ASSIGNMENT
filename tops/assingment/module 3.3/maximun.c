#include<stdio.h>
int main(){
maximum();
}
void maximum(){
    int size;
    printf("Enter the size of array :- ");
    scanf("%d",&size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at index %d  :- ",i);
        scanf("%d",&arr[i]);
    }
    
 int temp=0;
    for(int i=0;i<size;i++){
       
        if (arr[i]>=temp){
            temp=arr[i];
        }

       

    }
     printf("\n the maximun of the number amoung tthe array is :-  %d  \n", temp);    
}
