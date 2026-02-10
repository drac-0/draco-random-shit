#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct{
  int *item ;
  size_t count; 
  size_t capacity;
}dinar;


int main(){
  dinar ls = {0,0,0};
  
  for (int i = 0 ; i < 10 ; i++ ){
    if (ls.count >= ls.capacity){
      if (ls.capacity == 0) {ls.capacity = 256;} // the bug is the statement inside this if case never executed, why the fuck is it happen?
      else {ls.capacity *= 2;}
      ls.item = realloc(ls.item, ls.capacity*sizeof(*ls.item));
    }
    ls.item[ls.count++] = i;
  }
  for (int x =0 ; x < 10; x++){printf("%d\n", ls.item[x]);}
  return 0;
}

// i am rewinding too far so fuck it
