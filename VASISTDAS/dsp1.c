#include <stdio.h>
#include <stdlib.h>

typedef struct{
      char *key ;
      void (*func)(int a,int b);
}hashmap;

hashmap * hastable[10];


void hash(hashmap *hm, char *key, void (*dummy)(int a, int b)){
      hm->key = key;
      hm->func = dummy;
}

void test(int a, int b){
      printf("%d\n", a + b);
}

void printhash(){
      for (int i = 0 ; i < 10; i++){
            if (hastable[i] == NULL ){
                  printf("DONE");
                  break ;
            }
            printf("%s\n",hastable[i]->key);
      }
}

int main(){
      hashmap d1 ;
      hash(&d1, "key1",test);
      hastable[0] = &d1;
      printf("%s\n", hastable[0]->key);
      hastable[0]->func(1,2);
      printhash();

      return 0;

}
