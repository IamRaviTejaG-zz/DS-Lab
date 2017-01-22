#include<stdio.h>

int insert(int r[], int n, int a)
{
    if (a == 1)
    {
        system("cls");
        int g[n+1], f;
        int k;
        printf("Enter element to insert element at the beginning: ");
        scanf ("%d", &f);
        g[0] = f;
        for (k=0; k<n; k++)
            g[k+1] = r[k];
        printf("Insertion successful! The new array is as follows: \n\n");
        for (k=0; k<n+1; k++)
                printf("%d\n", g[k]);
    }

    else if (a == 2)
    {
        system("cls");
        int g[n+1], f;
        int k;
        printf("Enter element to insert at the middle: ");
        scanf ("%d", &f);
        int mid = 0;
        if (n%2==0)
            mid = n/2;
        else
            mid = (n-1)/2;
        for (k=0; k<mid; k++)
            g[k] = r[k];
        g[mid] = f;
        for (k=mid+1; k<n+1; k++)
            g[k] = r[k-1];
        printf("Insertion successful! The new array is as follows: \n\n");
        for (k=0; k<n+1; k++)
            printf("%d\n", g[k]);
    }

    else if (a == 3)
    {
        system("cls");
        int g[n+1], f;
        int k;
        printf("Enter element to insert at the end: ");
        scanf ("%d", &f);
        for (k=0; k<n; k++)
            g[k] = r[k];
        g[n] = f;
        printf("Insertion successful! The new array is as follows: \n\n");
        for (k=0; k<n+1; k++)
            printf("%d\n", g[k]);
    }

    else
    {
        printf("Invalid Choice. Clearing screen and calling main menu!");
    }
}

int del(int r[], int n, int a)
{
    if (a == 1)
    {
        system("cls");
        int g[n-1], f;
        int k;
        for (k=0; k<n-1; k++)
            g[k] = r[k+1];
        printf("Deletion successful! The new array is as follows: \n\n");
        for (k=0; k<n-1; k++)
            printf("%d\n", g[k]);
    }

    else if (a == 2)
    {
        system("cls");
        int g[n-1];
        int k;
        int mid = 0;
        if (n%2==0)
            mid = n/2;
        else
            mid = (n-1)/2;
        for (k=0; k<mid; k++)
            g[k] = r[k];
        for (k=mid+1; k<n; k++)
            g[k-1] = r[k];
        printf("Deletion successful! The new array is as follows: \n\n");
        for (k=0; k<n-1; k++)
            printf("%d\n", g[k]);
    }

    else if (a == 3)
    {
        system("cls");
        int g[n+1];
        int k;
        for (k=0; k<n-1; k++)
            g[k] = r[k];
        printf("Deletion successful! The new array is as follows: \n\n");
        for (k=0; k<n-1; k++)
            printf("%d\n", g[k]);
    }

    else
    {
        printf("Invalid Choice. Clearing screen and calling main menu!");
    }
}

int reverse (int r[], int n)
{
    system("cls");
    int g[n], i;
    for (i=0; i<n; i++)
        g[i] = r[n-i-1];
    printf("Reversing complete! Printing array: \n\n");
    for (i=0; i<n; i++)
        printf("%d\t", g[i]);
}

int main()
{
    int i, n, choice;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("\n\nEnter array elements: \n\n");
    for (i=0; i<n; i++)
        scanf ("%d", &a[i]);
    printf("\n\nEntry successful! Array is as follows: \n\n");
    for (i=0; i<n; i++)
        printf ("%d\t", a[i]);
    menu:;
    printf("\n\n1. Insert an element in the array.");
    printf("\n2. Delete an element from the array.");
    printf("\n3. Reverse the array.");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int e = 0;
        printf("1. Insert element at the beginning.\n2. Insert element at the middle.\n3. Insert element at the end.");
        printf("\n\nEnter your choice: ");
        scanf("%d", &e);
        insert(a, n, e);
    }

    else if (choice == 2)
    {
        int e = 0;
        printf("1. Delete the first element.\n2. Delete the middle element.\n3. Delete the last element.");
        printf("\n\nEnter your choice: ");
        scanf("%d", &e);
        del(a, n, e);
    }

    else if (choice == 3)
    {
        reverse(a, n);
    }

    else
    {
        printf("Invalid Choice. Clearing screen and calling main menu!");
        goto menu;
    }
    return 0;
}
