#include "../includes/ft.h"

// void funcBro(void (*f)(int))
// { // mostra numero
//   for (int i = 0; i < 5; i++)
//   {
//     (*f)(i);
//   }
// }

// void funcBro2(int arr[],size_t size, void (*f)(int))
// { // mostra numero do array
//   size_t i = 0;
//   if (arr)
//   {
//     while (i < size)
//     {
//       (*f)(arr[i]);
//       i++;
//     }
//   }
// }

// void charBro(char *str, void (*f)(char))
// { // mostra caracter da string
//   int i = 0;
//   if (str)
//   {
//     while (str[i] != '\0')
//     {
//       (*f)(str[i]);
//       i++;
//     }
//   }
// }

int main(int ac, char *argv[])
{
  // char *myStr = "Xampson";
  int myArr[] = {1, 2, 3, 4, 5, 6};
  int myArr2[] = {1123, 2314, 3425, 4564, 4567, 6708};
  size_t arrSize = sizeof(myArr) / sizeof(myArr[0]);

  ft_foreach(myArr, arrSize, ft_putnbr);
  ft_foreach(myArr2, arrSize, ft_putnbr);
  // funcBro(printNumber);
  // funcBro2(myArr, arrSize, printNumber);
  // charBro(myStr, printChar);
  return 0;
}