#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
void main()
{
    int value,choice;
    clrscr();
    while(1)
    {
        printf("menu");
        printf("1.push\n 2.pop\n 3.display\n 4.exit");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the value to be inserted ");
                    scanf("%d",&value);
                    break;

            case 2: pop();
                    break;

             case 3: display();
                    break;
             case 4: exit(0);
             default: printf("you have entered wrong choice");
        }

    }void push(int value)
    {  int size;

        if(top==size-1)
            printf("\nstack is full");
        else
            {
               top++;
            stack[top]=value;
            printf("insertion is possible");


           }

    }
    void pop()
     {
         if(top==-1)
        printf("stack is empty");
        else
        printf("\n deleted:%d",stack[top]);
        top--;

    }
      void display()
      {
          if(top==-1)
            printf("stack is empty");
          else
            int 1;

          printf("stack elements are");
          for(i=top;i>=0;i--)
              printf("%d\n",stack[i]);
      }
return 0;
        }

