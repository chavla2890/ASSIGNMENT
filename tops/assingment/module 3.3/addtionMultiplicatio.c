#include<stdio.h>
int main(){
    int cols1, cols2, rows1, rows2;

    printf("Enter the colams and row of first matrix :- ");
    scanf("%d %d", &cols1, &rows1);
    printf("Enter the colams and row of second matrix :- ");
    scanf("%d %d", &cols2, &rows2);

    int matrix1[cols1][rows1];
    int matrix2[cols2][rows2];

    for (int i = 0; i < cols1; i++)
    {
        for (int j = 0; j < rows1; j++)
        {
            printf("Enter the value at index for first matrix %d,%d :- ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
        
    }
    
    printf("-------------------------------------------------------------------- \n");

    for (int i = 0; i < cols2; i++)
    {
        for (int j = 0; j < rows2; j++)
        {
            printf("Enter the value at index for second matrix %d,%d :- ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
        
    }

 if(cols2==rows1){
    int answer1[cols1][rows2];
    
    for(int i=0;i<cols1;i++){
    for(int j=0;j<rows2;j++){
      answer1[i][j]=0;
      for(int k=0;k<rows2;k++){
        int temp=matrix1[i][k]*matrix2[k][j];
        answer1[i][j]+=temp;
      }
    }
  }
    printf(" The multiplication of two matrix is :- \n\n");
   for(int i=0;i<cols1;i++){
    for(int j=0;j<rows2;j++){
      printf("%d ",answer1[i][j]);
    }
    printf("\n");
  } 
  }else{
    printf("can not multiply ");
  }

int answer2[100][100];
for (int i = 0; i < cols1; ++i)
  {  for (int j = 0; j < rows1; ++j) {
      answer2[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
  // printing the result
  printf("\nSum of two matrices is :- \n");
  for (int i = 0; i < cols1; ++i)
    {for (int j = 0; j < rows1; ++j) {
      printf("%d   ", answer2[i][j]);
      
    }
    printf("\n");
  }

int answer3[100][100];
for (int i = 0; i < cols1; ++i)
   { for (int j = 0; j < rows1; ++j) {
      answer3[i][j] = matrix1[i][j] - matrix2[i][j];
    }
   }

  // printing the result
  printf("\n substration of two matrices is :- \n");
  for (int i = 0; i < cols1; ++i)
   { for (int j = 0; j < rows1; ++j) {
      printf("%d   ", answer3[i][j]);
      
    }
    printf("\n");
  }

    return 0;

}