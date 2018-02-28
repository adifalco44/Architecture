#include <stdio.h>
#include <math.h>

#define XSIZE 200
#define YSIZE 200

int main(void) {

  int x[XSIZE][YSIZE];
  int y[XSIZE][YSIZE];
  int z[XSIZE][YSIZE];

  int i, j, k;

  int r;

  /* Initialize y matrix */
  for(i=0; i<XSIZE; i++) {
    for(j=0; j<YSIZE; j++) {
      y[i][j] = i + j;
    }
  }

  /* Initialize z matrix */
  for(i=0; i<XSIZE; i++) {
    for(j=0; j<YSIZE; j++) {
        z[i][j] = i + j;
    }
  }

  for (i=0; i <XSIZE;i=i+2){
     for (j=0; j<YSIZE;j=j+2){
        for (k=0;k<XSIZE;k++){
                r = r + y[i+0][k] * z[k][j+0];
                r = r + y[i+0][k] * z[k][j+1];
                r = r + y[i+1][k] * z[k][j+0];
                r = r + y[i+1][k] * z[k][j+1];
        }
     }
  }


}
