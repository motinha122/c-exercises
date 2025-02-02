#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(const char *str)
{
  int i = 0;
  printf("strlen: %s \n", str);
  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}

int ft_strcmp(char *s1, char *s2)
{
  int i = 0;

  while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
  {

    i++;
  }

  unsigned char char1 = s1[i];
  unsigned char char2 = s2[i];

  printf("%d - %d \n", char1, char2);
  return char1 - char2;
}

// função para calcular o tamanho da str até encontrar o caracter anderson
int strlen_char(char *str, char *anderson, int index)
{
  int i = index;

  while (str[i] != *anderson)
  {
    i++;
  }
  return i;
}

// função para criar uma string separando ela pelo caracter e pelo indice
char *create_str(char *str, char*sep, int index){
  char *temp = (char *)malloc(strlen_char(str, sep,index) * sizeof(char *));
  if (temp == NULL)
    return NULL;

  int i = index;
  int temp_i = 0;
  while (str[i] != *sep)
  {
    temp[temp_i] = str[i];
    temp_i++;
    i++;
  }
  temp[temp_i] = '\0';
  // printf("create_str: %s \n", temp);
  return temp;
}

// função para calcular a quantidade de strings
int str_count(const char *str,const char *sep)
{
  int sep_size = ft_strlen(sep);

  if(str == NULL){
    return 0;
  }

  int count = 0;
  int i = 0;

  while (str[i] != '\0')
  {
    // printf("char: %c \n", str[i]);
    if(strncmp(&str[i], sep, ft_strlen(sep)) == 0){
      count++;
      i += sep_size;
    } else {
      i++;
    }
  }
  return count + 1;
}

char **ft_split(char *str, char *charset){
  size_t str_cnt = str_count(str, charset);
  char **temp = (char **)malloc((str_cnt + 1) * sizeof(char *));
  int i = 0;
  int str_index = 0;
  int jump_size = 0;
  while (i < str_cnt)
  {
    temp[i] = create_str(str, charset, str_index);
    jump_size = ft_strlen(temp[i]) + ft_strlen(charset);
    str_index += jump_size;
    printf("split[%d]: %s \n", i, temp[i]);
    i++;
  }
  temp[i] = 0;
  return temp;
}

void free_array(char **str)
{
  int i = 0;
  while (str[i] != 0){
    // printf("free: %s \n", str[i]);
    free(str[i]);
    i++;
  }
}

int main(void)
{
  int i = 0;
  char *res = "paralelepipedo**porco**arroz**jabuticaba**vodka**gato";
  // char *sub = strndup(res + 7, 5);
  // printf("strlen: %zu \n", ft_strlen(res));
  // printf("strndup: %s \n", sub);
  // char **test = ft_split(0, 0);
  // printf("test: %s \n", test[0]);
  // printf("test: %s \n", test[1]);
  // printf("strlen_anderson: %d \n", strlen_char(res, "**", 0));
  // printf("str count: %d \n", str_count(res, "**"));
  // printf("create_str: %s \n", create_str(res, "**",0));
  // printf("create_str: %s \n", create_str(res, "**", 23));
  // printf("create_str: %s \n", create_str(res, "**", 30));
  // printf("create_str: %s \n", create_str(res, "**", 42));
  char **str_arr = ft_split(res, "**");
  free_array(str_arr);
  free(str_arr);
  return 0;
}
