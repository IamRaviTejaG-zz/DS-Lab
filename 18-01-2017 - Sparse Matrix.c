#include<stdio.h>

int main()
{
    int sparse[5][5], i, j, arr_row = 1, count = 0;
    printf("Enter the sparse matrix: \n\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            scanf("%d", &sparse[i][j]);
            if (sparse[i][j] != 0)
                count++;
        }
    }

    int arr[count+1][3];
    arr[0][0] = 5;
    arr[0][1] = 5;
    arr[0][2] = count;

    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if (sparse[i][j] != 0)
            {
                arr[arr_row][0] = i;
                arr[arr_row][1] = j;
                arr[arr_row][2] = sparse[i][j];
                arr_row++;
            }
        }
    }
    printf("\n\nThe non-sparse matrix is:\n\n");
    for (i=0; i<arr_row; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
