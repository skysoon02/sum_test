#include "sum.h"

int sum(int n){
  int total = 0;
  while(n){
    total += n;
    n--;
  }
  return total;
}
