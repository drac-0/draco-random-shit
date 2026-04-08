#include <stdio.h>
#include <math.h>
#include <stdlib.h>


//THIS SHIT SUCKED

int main(){
      double mainmat[3][3] = {
            {1,3,1},
            {1,2,3},
            {3,2,2}
      };

      double sumcol[3] = {0,0,0};
      double wg[3] = {4,3,3};
      for (int i = 0 ; i < 3; i++){
            for (int j = 0 ; j < 3 ; j++){
                  sumcol[i] += mainmat[j][i] * mainmat[j][i]; 
            }
            sumcol[i] = sqrt(sumcol[i]);
      }
      
      //times sqrt also ideal best
      for (int i = 0 ; i < 3; i++){
            
      }
      double ideal_picture_of_myself[3]= {0.0,0.0,0.0};
      double ideal_picutre_of_greg[3] = {110.0,110.0,110.0}; //this way of calculating the ideal worst is shit

      for (int i = 0 ; i < 3; i++){
            for (int j = 0 ; j < 3 ; j++){
                  mainmat[i][j] = (mainmat[i][j] / sumcol[j]) * wg[j];
            }
      }

      for (int i = 0 ; i < 3; i++){
            for (int k = 0 ; k < 3; k++){
                  if (mainmat[k][i] > ideal_picture_of_myself[i] ){
                        ideal_picture_of_myself[i] = mainmat[k][i];
                  }

                  if (mainmat[k][i] < ideal_picutre_of_greg[i] ){
                        ideal_picutre_of_greg[i] = mainmat[k][i];
                  }
            }
      }

      for (int i = 0 ; i < 3; i++){
            for (int j = 0 ; j < 3 ; j++){
                  printf("%f ", mainmat[i][j]);
            }
            printf("\n");
      }

      for (int i = 0 ; i < 3;i++ ){
            printf("%f ", sumcol[i]);
      }
      printf("\n");

      //ideal best
      printf("IDEAL BEST\n");
      for (int i = 0 ; i < 3;i++ ){
            printf("%f ", ideal_picture_of_myself[i]);
      }
      printf("\n");
      printf("IDEAL WORST\n");
      for (int i = 0 ; i < 3;i++ ){
            printf("%f ", ideal_picutre_of_greg[i]);
      }
}

