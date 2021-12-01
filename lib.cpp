#include 2lib.h"
int fun (int a){
  int div=1, divint=0;
  while(divint<=1 and div <=a/2){
    if (a%div==0){
      divint++;
    }
    div++;
  }if (divint==1){
    return 1;
  }else{
    return 0;
  }
}
