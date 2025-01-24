#include <unistd.h>
#include <stdio.h>

void ft_ft(int *********nbr){
  *********nbr = 42;
}

int main(){
  int a = 10;
  int *p = &a;
  int **p1 = &p;
  int ***p2 = &p1;
  int ****p3 = &p2;
  int *****p4 = &p3;
  int ******p5 = &p4;
  int *******p6 = &p5;
  int ********p7 = &p6;
  int *********p8 = &p7;

  ft_ft(p8);
  printf("%d \n", a);
  printf("%d \n", *********p8);
  return 0;
}
