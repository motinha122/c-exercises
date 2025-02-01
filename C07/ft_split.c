#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// usar o strndup pra capturar as strings

// alocar espaço para os ponteiros, não só o ponteiro de ponteiro

void free_array(char **str){
  int i = 0;
  while (*str[i] != 0)
  {
    free((void *)str[i]);
    i++;
  }
}

char **ft_split(char *str, char *charset){
  size_t str_count = 2;
  char **temp = (char **)malloc(str_count + 1 * sizeof(char *));
  char *str1 = strdup("casa");
  char *str2 = strdup("dado");
  temp[0] = str1;
  temp[1] = str2;
  temp[2] = 0;

    return temp;
}

int main(void)
{

  char *res = "sapato+porco+arroz+jabuticaba+vodka";
  char *sub = strndup(res + 7,5);
  printf("strlen: %zu \n", strlen(res));
  // printf("strjoin: %s \n", temp);
  printf("strndup: %s \n", sub);
  // free(temp);
  char **test = ft_split(0, 0);
  printf("test: %s \n", test[0]);
  printf("test: %s \n", test[1]);

  return 0;
}
