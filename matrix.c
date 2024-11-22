#include <stdio.h>

// We have to multiply two matrices of dimensions m x n and n x p, inputted by user, and display the resulting m x p matrix

int main()
{
    int m, n, p;

    printf("Enter the rows of the first matrix: ");
    scanf("%d", &m);

    printf("Enter the columns of the first matrix (which would be equal to the rows of second matrix): ");
    scanf("%d", &n);

    printf("Enter the columns of the second matrix: ");
    scanf("%d", &p);

    float matrixA[100][100], matrixB[100][100], matrixC[100][100];

    printf("Matrix A: \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matrixA[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f ", matrixA[i][j]);
        }
        printf("\n");
    }

     printf("\nMatrix B: \n");

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("Enter the element[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%.2f ", matrixB[i][j]);
        }
        printf("\n");
    }


    return 0;
    
}