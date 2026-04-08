#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ROW 5
#define COLUMN 5


int greg_wants_quake(){
      // 1:√x thanks to almighty quake III dev

}


int ** greg(int row, int column, int val){
      int ** mat = malloc(sizeof(int *) * row);
      for (int i = 0 ; i < row ; i ++ ){
            *(mat + i) = malloc(sizeof(int *) * column); 
      }
      for (int i = 0 ; i < row ; i ++ ){
            for (int j = 0 ; j < column; j++){
                  mat[i][j] = 2;
            }
      }
      return mat;
}


int greg_needThis(int number, int **matr){

}




int main(){
      int ** mainmat = greg(2, 2, 2);
      for (int i = 0 ; i < 2; i++){
            for(int j = 0 ; j < 2; j++){
                  printf("%d ", mainmat[i][j]);
            }
            printf("\n");
      }
}
