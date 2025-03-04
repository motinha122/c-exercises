#include "../includes/ft.h"

int ft_isbigger(int a, int b){
  if(a < b){
    return -1;
  }
  if(a > b){
    return 1;
  }
  return 0;
}