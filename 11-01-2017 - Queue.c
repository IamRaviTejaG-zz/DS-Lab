#include<stdio.h>

/* Global Variables */
#define SIZE 100
int front = -1, rear = -1, a[SIZE];
/* Global Variables */

push (int element) // Pushes into queue.
{
        front = 0;
        if (rear == SIZE)
            printf("\nQueue Overflow!");
        else
        {
            rear++;
            a[rear] = element;
        }
}

pop () // Pops from the queue.
{
    if (front == rear)
        printf("\nQueue Underflow!");
    else
        front++;
}

int main()
{
    int ele, choice;
    char c;
    printf("1. Push into queue.\n2. Pop from queue.\n3. View queue.\n\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("\n\nEnter element to push: ");
        scanf("%d", &ele);
        push(ele); // Calling the push() function.
        printf("\nPush successful! Calling main menu!\n\n");
        main();
    }

    else if (choice == 2)
    {
        pop(); // Calling the pop() function.
        printf("\nPop successful! Calling main menu!\n\n");
        main();
    }

    else if (choice == 3)
    {
        int i;
        printf("<-- shows the last element.\n\n");
        for (i=rear; i>=front; i--)
        {
            printf("%d", a[i]);
            if (i == rear)
                printf("\t<--");
            printf("\n");
        }
        printf("\n\n");
        main();
    }

    else
        printf("\nInvalid Choice!");

    return 0;
}
