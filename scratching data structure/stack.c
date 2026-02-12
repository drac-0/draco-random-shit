#include <bits/types/stack_t.h>
#include <stdio.h>
#include <stdlib.h>

#define STACKLEN 10

typedef struct{
  int arr[STACKLEN];
  int topi;

}Stack ;

void push(int val, Stack *stack){
  if (stack->topi > STACKLEN - 1){
    printf("STACK OVERLOAD\n");
  }
  stack->arr[stack->topi] = val;
  stack->topi++;
}

void printstack(Stack *stack){
  for (int i = 0 ; i < stack->topi; i++){
    printf("[ %d ]\n", stack->arr[stack->topi - i - 1]);
  }
}

void pop(Stack *stack){

}

int main(){
  Stack s1 ;
  push(1, &s1);
  push(2, &s1);
  push(3, &s1);
  push(7, &s1);

  printstack(&s1);
}

