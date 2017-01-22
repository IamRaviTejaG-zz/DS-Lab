#include<stdio.h>

/* Global Variables */
#define SIZE 100
int top = -1, a[SIZE];
/* Global Variables */

push (int element) // Pushes into stack.
{
        if (top == SIZE)
            printf("Stack Overflow!");
        else
        {
            top+=1;
            a[top] = element;
        }
}

pop () // Pops from the stack.
{
    if (top == -1)
        printf("Stack Underflow!");
    else
        top-=1;
}

int main()
{
    int ele, choice;
    char c;
    printf("1. Push into stack.\n2. Pop from stack.\n3. View stack.\n\nEnter your choice: ");
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
        for (i=0; i<=top; i++)
            printf("%d\t", a[i]);
        main();
    }

    else
        printf("Invalid Choice!");

    return 0;
}
