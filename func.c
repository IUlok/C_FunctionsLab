#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "funcs.h"

int main() {
  int kolvo_shagov;
  printf("Введите точность (кол-во шагов): ");
  scanf("%d", &kolvo_shagov);

  double *f = (double*)malloc(kolvo_shagov*sizeof(double));
  float shag;
  int num = 0;
  double S1, S2, S3;

  shag=fabs((-1.2)-(-0.8))/kolvo_shagov;
  for (float i = -1.2; i<=-0.8; i+=shag) {
    f[num] = pow(fabs(i), 3);
    num++;
  }
  S1 = Integral(f, shag, num);
  printf("Участок 1 = %lf\n", S1);
  num = 0;

  shag=fabs((-0.8)-(0))/kolvo_shagov;
  for (float i = -0.8; i<=0; i+=shag) {
    f[num] = fabs(i);
    num++;
  }
  S2 = Integral(f, shag, num);
  printf("Участок 2 = %lf\n", S2);
  num = 0;

  shag=fabs((0)-(1.8))/kolvo_shagov;
  for (float i = 0.000001; i<=1.8; i+=shag) {
    f[num] = log(fabs(i))+1;
    num++;
  }
  S3 = Integral(f, shag, num);
  printf("Участок 3 = %lf\n", S3);
  num = 0;

  printf("Сумма всей площади под графиком: %lf\n", (S1+S2+S3));
  free (f);
  return 0;
}
