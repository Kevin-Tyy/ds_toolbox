#include <iostream>
int MAXSIZE = 8;
int stack[8];
int top = -1;

int isfull()
{
  if (top == MAXSIZE)
    return 1;
  else
    return 0;
}

int push(int data)
{
  if (!isfull())
  {
    top = top + 1;
    stack[top] = data;
  }
  else
  {
    printf("Stack is full.\n");
  }
  return data;
}

int main()
{
  int i;
  push(44);
  push(10);
  push(62);
  push(123);
  push(15);
  
  printf("Stack Elements: \n");

  for (i = 0; i < 8; i++)
  {
    printf("%d ", stack[i]);
  }
  return 0;
}