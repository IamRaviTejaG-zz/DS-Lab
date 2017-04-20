#include<stdio.h>

char stack[20];
char pfix[20];
int top = -1;

push (char a)
{
    stack[++top] = a;
}

pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int pty (char a)
{
    if (a == '+' || a == '-')
        return 1;
    else if (a =='*' || a == '/')
        return 2;
    else if (a == '(')
        return 0;
}

int main()
{
    char s[30];
    char q, r;
    int i, c = 0;
    printf("Enter the expression:\n");
    gets(s);
    fflush(stdin);
    for (i=0; s[i] != '\0'; i++)
    {
        if (isalnum(s[i]))
        {
            pfix[c] = s[i];
            c++;
        }
        else if (s[i] == '(')
            push(s[i]);
        else if (s[i] == ')')
        {
            while((r = pop()) != '(')
            {
                pfix[c] = r;
                c++;
            }
        }
        else
        {
            while(pty(stack[top]) >= pty(s[i]))
            {
                pfix[c] = pop();
                c++;
            }
            push(s[i]);
        }
    }
    while (top != -1)
    {
        pfix[c] = pop();
        c++;
    }
    printf("\nThe postfix expression is:\n\n");
    puts(pfix);
    return 0;
}
