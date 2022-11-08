#include <stdio.h>
//Matrix exercice


int main() {
    int sum = 0, sum1 = 0;
    int i, j, size1, size2;
    int arr[10][10];
    printf("Select matrix size: ");
    scanf("%d %d", &size1, &size2);     //Select rows and columns sizes
    
    for(i = 0; i < size1; i++)          //Increment until rows size 
    {
        for(j = 0; j < size2; j++)      //Increment until columns size
        {
            printf("Select num[%d][%d]: ", i+1, j+1); //Starts the count with                                                             [1][1]
            scanf("%d", &arr[i][j]);                  //Input the elements in                                                             matrix
        }
    }
    
    //Prints the matrix
    printf("\nMatrix: \n");
    for(i = 0; i < size1; i++)
    {
        for(j = 0; j < size2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    //Checks if the matrix is square or not.
    printf("\n");
    if(size1 == size2)			//If square, check the matrix diagonals
    {
        printf("This is a square matrix.");
        for(i = 0; i < size2; i++)
        {
            for(j = 0; j < size1; j++)
            {
                if(i == j)
                {
                    sum += arr[i][j];
                }
                else if(i+j == size1-1)
                {
                    sum1 += arr[i][j];
                }
            }
            printf("\n");
    }
    printf("Main diagonal = %d\n", sum);
    printf("Opposed diagonal = %d", sum1);
    }
    else 
    {
        printf("This is not a square matrix.");
    }
    printf("\n");
    
    
    //Prints transpose of matrix
    printf("\n");
    printf("Transpose of matrix: \n");
    for(i = 0; i < size2; i++)
    {
        for(j = 0; j < size1; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}