#include <unistd.h>

void ft_is_negative(int n)
{
  if(n >= 0){
    char P = 'P';
    write(1, &P, 1);
  }
  else {
    char N = 'N';
    write(1, &N, 1);
  }
}

int main()
{
  ft_is_negative(-3);
  ft_is_negative(3);
  ft_is_negative(0);
  return 0;
}