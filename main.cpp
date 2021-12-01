#include <iostream>
#include "lib.h"
using namespace std;


int main(){
  int a=0;
  int risultato;
  cin >>a;
  risultato=fun(a);
  if (risultato ==1){
    cout<<"numero primo" << endl;
  }else{
    cout <<"numero non primo" << endl;
  }
  return 0;
}
