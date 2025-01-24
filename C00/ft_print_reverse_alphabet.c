#include <unistd.h>
//UNIX STYLE
void iterate_alphabet(int n)
{
  if (n == 96) 
    return;

  write(1, &n, 1);
  iterate_alphabet(n - 1);
}

int main()
{
  iterate_alphabet(122);
  return 0;
}