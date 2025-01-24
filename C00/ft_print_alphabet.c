#include <unistd.h>

/*int fn_for_natural(int n)
{
  if (n == 0)
  {
    ...
  }
  else{
    ... n
    return fn_for_natural(n-1);
  }
}*/

void iterate_alphabet(int n)
{
  if (n == 123)
  {
    return;
  }
  else
  {
    write(1, &n, 1);
    iterate_alphabet(n + 1);
  }
}

void ft_print_alphabet(void){
  char a = 'a';
  char b = 'b';
  char c = 'c';
  char d = 'd';
  char e = 'e';
  char f = 'f';
  char g = 'g';
  char h = 'h';
  char i = 'i';
  char j = 'j';
  char k = 'k';
  char l = 'l';
  char m = 'm';
  char n = 'n';
  char o = 'o';
  char p = 'p';
  char q = 'q';
  char r = 'r';
  char s = 's';
  char t = 't';
  char u = 'u';
  char v = 'v';
  char w = 'w';
  char x = 'x';
  char y = 'y';
  char z = 'z';
  write(1, &a, 1);
  write(1, &b, 1);
  write(1, &c, 1);
  write(1, &d, 1);
  write(1, &e, 1);
  write(1, &f, 1);
  write(1, &g, 1);
  write(1, &h, 1);
  write(1, &i, 1);
  write(1, &j, 1);
  write(1, &k, 1);
  write(1, &l, 1);
  write(1, &m, 1);
  write(1, &n, 1);
  write(1, &o, 1);
  write(1, &p, 1);
  write(1, &q, 1);
  write(1, &r, 1);
  write(1, &s, 1);
  write(1, &t, 1);
  write(1, &u, 1);
  write(1, &v, 1);
  write(1, &w, 1);
  write(1, &x, 1);
  write(1, &y, 1);
  write(1, &z, 1);
}

int main(){
  iterate_alphabet(97);
  return 0;
}