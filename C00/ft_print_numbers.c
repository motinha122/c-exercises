#include <unistd.h>

void iterate_number(int n)
{
  if (n == 58)
  {
    return;
  }
  else
  {
    write(1, &n, 1);
    iterate_number(n + 1);
  }
}

int main()
{
  iterate_number(48);
  return 0;
}