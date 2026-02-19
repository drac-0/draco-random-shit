#include <stdio.h>
#include <stdlib.h>

typedef struct LL {
  int val;
  struct LL *next;
  struct LL *prev;
}DLL;

void listprint(DLL *head){
  DLL *temp = head;
  while (temp != NULL){
    printf("%d - ", temp->val);
    temp = temp->next;
  }
  printf("END\n");
}

DLL *append(int val ){
  DLL *newnode = malloc(sizeof(DLL));
  newnode->val = val;
  newnode->next = NULL;
  return newnode;
}

DLL *movetohead(DLL **head, DLL *node){
  node->next = *head;
  *head = node;
  return node;
}

DLL *findval (DLL *head, int valtofind){
  DLL *temp = head;
  while(temp != NULL){
    if (temp->val == valtofind)return temp;
    temp = temp->next;
  }
  return NULL;
}

void insertafter(DLL *insertnode, DLL *inserted ){
  inserted->next = insertnode->next;
  insertnode->next = inserted;
}

int main(){
  DLL *head ;
  DLL *temp ;

  //linked by default
  temp = append(5);
  head = temp;
  temp = append(3);
  temp->next = head;
  head = temp;
  temp = append(1);
  temp->next = head;
  head = temp;

  listprint(head);

  //linked by loop and function
  for (int i = 0 ; i < 10 ; i++){
    temp = append(i);
    movetohead(&head, temp);
    //temp->next = head; //temp.next become NULL
    //head = temp; //temp becomes head
  }

  listprint(head);

  temp = findval(head, 0);
  printf("%d found inside the ll\n", temp->val);

  insertafter(temp, append(17));
  listprint(head);
 
}
