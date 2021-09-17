/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
  int x;
  printf ("Enter the value :");
  scanf ("%d", &x);
  if (top == N - 1)
    {
      printf ("Stack is overflow. You cannot push any item.");
    }
  else
    {
      top++;
      stack[top] = x;
    }
}

void pop()
{
  int item;
  if (top == -1)
    {
      printf ("Stack is Empty");

    }
  else
    {
      item = stack[top];
      top--;
      printf ("Pop value=%d", item);
    }
}

void display()
{
  int i;
  
  
  if (top == -1)
    {
      printf ("Stack is empty.");

    }
    else
    {
         printf("Stack is : \n ");
      for (i = top; i >= 0; i--)
	{
	    
	  printf (" %d \t",stack[i]);
	
    }
    }
    
}

void main ()
{
  int ch;
  do 
  {
  printf ("\n1.Push\n2.Pop\n3.Display.");
  printf("\n Enter your choice.");
  scanf ("%d", &ch);
  
      switch(ch)
	{
	case 1:
	{
	  push();
	  break;
	}
	case 2:
	{
	  pop();
	  break;
	}
	case 3:
	{
	  display();
	  break;
	}
	default:

	  printf ("Invalid Enter");
	}
    }while(ch!=0);
}

