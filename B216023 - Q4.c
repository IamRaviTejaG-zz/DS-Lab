#include<stdio.h>

int main()
{
    int i, n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements of the array:\n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (i=0; i<n; i++)
        if (a[i]%2 == 0)
            count++;
    if (count == n)
        printf("TRUE");
    else
        printf("FALSE");
    return 0;
}
