#include <stdio.h>

#include <stdlib.h>


int top1 = -1, inp_array1[3], inp_array2[3], top2 = -1;
void push1();
void push2();
void compare();

int main()
{
    int choice;

    while (1)
    {
        printf("\n1.Push the element in stack 1\n2.Push the element in stack 2\n3.compare\n4.end");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push1();
            break;
        case 2:
            push2();
            break;
        case 3:
            compare();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push1()
{
    int x;

    if (top1 == 3 - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack1: ");
        scanf("%d", &x);
        top1 = top1 + 1;
        inp_array1[top1] = x;
    }
}

void push2()
{
    int y;

    if (top2 == 3 - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack2: ");
        scanf("%d", &y);
        top2 = top2 + 1;
        inp_array2[top2] = y;
    }
}

void compare()
{
    if (inp_array1[0]==inp_array2[0] && inp_array1[1]==inp_array2[1] && inp_array1[2]==inp_array2[2] )
    {
        printf("Both stacks are equal\n");
    }
    else
    {
        printf("\nboth stacks are not equal \n");
    }
}
