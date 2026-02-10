#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

typedef struct{
  int *item ;
  size_t count; 
  size_t capacity;
} dinar;

void append(int val, dinar *ls){
  if(ls->count >= ls->capacity){
    if(ls->capacity == 0 ) ls->capacity = 256;
    else ls->capacity *= 2;
    ls->item = realloc(ls->item, ls->capacity*sizeof(*ls->item));
  }
  ls->item[ls->count++] = val;
}

void printlist(dinar *ls){
  printf("{");
  for (int i = 0 ; i < ls->count; i ++){
    printf("%d ", ls->item[i]);
  }
  printf("\b}\n");
}

int main(){
  dinar ls = {0};
  append(5, &ls);
  append(3,&ls);
  printlist(&ls);
  return 0;
}

