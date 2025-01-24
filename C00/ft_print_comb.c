#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int extract_cent(int n) { return n / 100; }
int extract_deze(int n) { return (n % 100) / 10; }
int extract_unid(int n) { return (n % 100) % 10; }

void print_3digits_number(int n)
{                                       //* 123         
  int cent = extract_cent(n) + 48;      //* 1 , R = 23 
  int deze = extract_deze(n) + 48;      //* 2 , R = 3  
  int unid = extract_unid(n) + 48;      //* 3 , R = 0    

  ft_putchar(cent);
  ft_putchar(deze);
  ft_putchar(unid);

  ft_putchar(',');
  ft_putchar(' ');
}

int comb_rules(int n){
  if(extract_cent(n) < extract_deze(n) && extract_deze(n) < extract_unid(n)){
    return 1;
  } 
  return 0;
}

void print_comb(void)
{
  for (int i = 0; i < 790; i++)
  {
    if (comb_rules(i) == 1){
      print_3digits_number(i);
    }
  }
}

int main()
{
  //print_3digits_number(111);
  print_comb();
  return 0;
}