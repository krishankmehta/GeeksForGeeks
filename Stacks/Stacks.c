#include<stdio.h>


#define max 100


struct stack
{
    int top;
    int array[max];
};





void push(struct stack *s,int data)
{
    if(s->top == max)
    {
        printf("Stack is full");
    }
    s->array[s->top] = data;
    ++s->top;
    
}

void pop(struct stack *s)
{
    if(s->top == 0)
    {
        printf("Stack is empty");
    }
    s->array[s->top] = 0;
    s->top--;
}



void display(struct stack* s)
{
    for(int i=0;i<s->top;i++)
    { 
        printf("%d ",s->array[i]);
    }
}

int main()
{
  struct stack s;
  s.top = 0;
  push(&s,10);
  push(&s,20);
  push(&s,30);
  push(&s,40);
  push(&s,50);
  printf("%d",s.top);
  pop(&s);
  pop(&s);
  pop(&s);
  pop(&s);
  pop(&s);
  pop(&s);
  display(&s);
}
