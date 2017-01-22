#include<stdio.h>

int main()
{
    int i, j, m, n, elements;
    printf("Enter sparse matrix's dimensions and no. of non-zero elements: ");
    scanf("%d%d%d", &m, &n, &elements);
    int sparse[m][n];
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            sparse[i][j] = 0;
        }
    }
    int row, column, ele;
    printf("\n\nEnter non sparse matrix: \n\n");
    for (i=0; i<elements; i++)
    {
        scanf("%d%d%d", &row, &column, &ele);
        sparse[row][column] = ele;
    }
    printf("\n\nThe sparse matrix is: \n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d\t", sparse[i][j]);
        }
        printf("\n");
    }
}
