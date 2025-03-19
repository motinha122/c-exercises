#include "../includes/ft_list.h"

t_vector *create_vector(int x_value, int y_value){
  t_vector *temp = (t_vector *)malloc(1 * sizeof(t_vector));
  if(temp == NULL){
    return NULL;
  }
  temp->x = x_value;
  temp->y = y_value;
  return temp;
}