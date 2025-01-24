#include <unistd.h>

/* UTILITY */

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int extract_deze(int n) { return (n % 100) / 10; }
int extract_unid(int n) { return (n % 100) % 10; }

void print_2digits_number(int n)
{                                
  int deze = extract_deze(n) + 48;
  int unid = extract_unid(n) + 48; 

  ft_putchar(deze);
  ft_putchar(unid);

  ft_putchar(' ');
}

/* IMPLEMENTATION */

void ft_print_comb2(void){
  int i = 0;
  int j;
  while (i < 99)
  {
    j = i + 1;
    while(j < 100){
      print_2digits_number(i);
      print_2digits_number(j);
      ft_putchar(',');
      ft_putchar(' ');
      j++;
    }
    i++;
  }
}

int main(){
  // print_2digits_number(12); tests
  // print_2digits_number(99);
  // print_2digits_number(35);
  ft_print_comb2();
  return 0;
}