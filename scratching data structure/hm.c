#include <stdio.h>
#include <stdbool.h>

#define tablen 10

typedef struct {
  char key;
  int val;
} hm ;

hm * hastable[tablen];

void hash_init(){
  for (int i = 0 ; i < tablen ; i++){
    hastable[i] = NULL;
  }
}

void insert(){

}


void hashprint(){
  for (int i = 0 ; i < tablen ; i++){
    if (hastable[i] == NULL){ printf("\t%i\t---\n", i);}
    else {
      printf("\t%i\t%d\n", i, hastable[i]->val);
    }
  }
}


bool append(hm *p){
  if (p == NULL){ return false;}
  int index = p->val;
  if(hastable[index] != NULL){ return false;}
  hastable[index] = p;
  return true;

  
}



int main(){
  hm q = {.val = 0, .key = 'q'};
  append(&q);
  hashprint();

}
