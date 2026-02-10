#include <stdio.h>
#include <stdlib.h>

typedef struct Linkedlist{
  int val ;
  struct Linkedlist *nextP;
} LL;

LL *createnode(int val){
  LL *newi = malloc(sizeof(LL));
  newi->val = val;
  newi->nextP = NULL;
  return newi;
}

void printlist(LL *head){
  LL *new = head;
  while (new != NULL){
    printf("%d - ", new->val);
    new = new->nextP;
  }
  printf("END");
  printf("\n");
}

int main(){ 
  LL *head;
  LL *temp;

  temp = createnode(32);
  head = temp;
  printf("%d", head->val);
  temp = createnode(1);
  temp->nextP = head;
  head = temp;
  printf("%d", head->val);
  temp = createnode(20);
  temp->nextP = head;
  head = temp;
  printf("%d", head->val);


  
/*
  for (int i = 0 ; i < 20 ; i++){
    temp = createnode(i);
    temp->nextP = head;
    head = temp;
  }
  */
  //printlist(head);
}
