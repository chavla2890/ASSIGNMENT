#include<stdio.h>
int main(){
    int a, b;
    printf("enter size of two d array :- ");
    scanf("%d", &a);
    // int arr[a][b];
    // for(int i=0; i<a; i++){
    //     for(int j=0;j<b;j++){
    //         printf("enter the value :- %d,%d",i ,j);
    //         scanf("%d",&arr[i][j]);
    //     }
        
    // }
    for (int i = a-1; i >=0 ; i--)
    { for (int j = a-1; j >=0; j--)

    {
       if(i==j || i+j==a-1 ||  j==a-1 || j==0){
         printf("*");
            
    }else{
        printf(" ");
    }
    }
    
       printf("\n");
    }

    return 0;
}
