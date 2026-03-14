#include <stdio.h>
#include <stdlib.h>

typedef struct{
      char *key ;
      void (*func)(int a,int b);
}hashmap;

void hash(hashmap *hm, char *key, void (*dummy)(int a, int b)){
      hm->key = key;
      hm->func = dummy;
}

void test(){
      printf("dummy function");
}

int main(){
      hashmap d1 ;
      hash(&d1, "test",test);
      return 0;
}
