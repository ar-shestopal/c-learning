#include <stdio.h>
#include "stack.h"

int main(int argc, char *argv[])
{
  stack s;

  StackNew(&s);
  StackPush(&s, 1);
  StackPush(&s, 3);

  printf("Stack contains - %d\n", StackPop(&s));
  return 0;
}
