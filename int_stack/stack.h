#ifndef stack_h
#define stack_h

typedef struct {
    int *elems;
    int loglength;
    int alloclength;
} stack;

void StackNew(stack *s);
void StackDispose(stack *s);
void StackPush(stack *s, int value);
int StackPop(stack *s);

#endif /* stack_h */
