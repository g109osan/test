#include <stdio.h>
#include <math.h>//sqrtを利用するために必要なヘッダーファイル
#include <stdlib.h>//数値を変換するために必要なヘッダーファイル
double myRoot(double x) // x の平方根を返す関数。x >= 0 ではないとき exit(1) とする。 
{ // 配列の中身は倍精度実数型だからdouble型
  double y; // 配列の中身は倍精度実数型だから
  if( x < 0 ){ // x >= 0 の時の平方根を返すため x = 0 は含まれない
    exit(1);
  }
  y = sqrt(x);
  return y;
}

int main(void)
{
  int i;
  double *x = (double *)malloc(sizeof(double) * 101); // 0~100の配列より101個必要

  i = 0; //初期値が設定されていない
  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  //以下は確認用(このままで良い)
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}
