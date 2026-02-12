#include <bits/types/stack_t.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACKLEN 10

typedef struct{
  int arr[STACKLEN];
  int topi;

}Stack ;

void initstack(Stack *stack){
  stack->topi = -1;
}

bool emptycheck(Stack *stack){
  return stack->topi == -1;;
}

bool full(Stack *stack){
  return stack->topi >= STACKLEN - 1;
}

void push(int val, Stack *stack){
  if (stack->topi > STACKLEN - 1){
    printf("STACK OVERLOAD\n");
  }
  stack->topi++;
  stack->arr[stack->topi] = val;
}

void printstack(Stack *stack){
  for (int i = 0 ; i <= stack->topi; i++){
    printf("[ %d ]\n", stack->arr[stack->topi - i ]);
  }
}

int pop(Stack *stack){
  if (emptycheck(stack)){
    printf("empty stack\n");
    return -1 ;
  }

  int popped = stack->arr[stack->topi];
  stack->topi--;
  return popped;
}

int main(){
  Stack s1 ;
  initstack(&s1);
  push(1, &s1);
  push(2, &s1);
  push(3, &s1);
  push(7, &s1);
  printstack(&s1);

  printf("%d\n", pop(&s1));
  printstack(&s1);
  printf("\n");
  push(9, &s1);
  printstack(&s1);
  
}

