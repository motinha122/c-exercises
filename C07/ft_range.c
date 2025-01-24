#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ft_range(int min, int max){
  if(min >= max)
    return NULL;

  int *snake_case = (int *)malloc(sizeof(int *)*(max - min));
  
  if(snake_case == NULL)
    return NULL;

  int i = min;
  while (i < max)
  {
    snake_case[i - min] = i;
    i++;
  }

  return snake_case;
}

int main(void)
{
  int min = 8;
  int max = 16;

  int *nums = ft_range(min, max);
  int i = min;
  while (i < max)
  {
    printf("%d \n", nums[i - min]);
    i++;
  }
  free(nums);
  return 0;
}
