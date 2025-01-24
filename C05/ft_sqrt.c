#include <stdio.h>
#include <math.h>

// int ft_sqrt(int n){
//   int i = 1;
//   while (i * i != n)
//   {
//     if (i * i > n)
//     {
//       return 0;
//     }
//     i++;
//   }

//   return i;
// }

double f(double x){
  return (x * x) - 7;
}

double fx(double x, double c){
  return (x * x) - c;
}

double dx(double x){
  return 2 * x;
}

double niuton_7(){
  double a0 = 1;
  double tol = 0.0001;
  double Xk = a0;
  double Xkant;

  while (fabs((Xk * Xk) - 7.0) > tol)
  {
    Xkant = Xk;
    Xk = Xkant - f(Xkant) / dx(Xkant);
  }

  return Xk;
}

double niuton(int n)
{
  double a0 = 1;
  double tol = 0.0001;
  double Xk = a0;
  double Xkant;

  while (fabs((Xk * Xk) - n) > tol)
  {
    Xkant = Xk;
    Xk = Xkant - fx(Xkant, n) / dx(Xkant);
  }

  return Xk;
}

int main(void)
{
  printf("%f \n", niuton_7());
  printf("%f \n", niuton(2));
  return 0;
}