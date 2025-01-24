#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range,int min, int max){
  if(min >= max)
    return -1;

  int *temp_array = (int *)malloc(sizeof(int *)*(max - min));
  
  if(temp_array == NULL)
    return -1;

  int i = min;
  while (i < max)
  {
    temp_array[i - min] = i;
    i++;
  }

  *range = temp_array;

  return max - min;
}

int main(void)
{
  int min = 8;
  int max = 16;

  int *nums;
  int size = ft_ultimate_range(&nums, min, max);
  int i = min;
  while (i < max)
  {
    printf("%d \n", nums[i - min]);
    i++;
  }
  printf("size: %d \n", size);
  free(nums);
  return 0;
}
