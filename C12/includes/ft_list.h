#ifndef FT_LIST_H
#define FT_LIST_H

#include "utils.h"

typedef struct s_list
{
  void *data;
  struct s_list *next;
} t_list;

typedef struct s_vector
{
  int x;
  int y;
} t_vector;

/*
 *    @brief Prints "Hello".
 */
void ft_hello();

/*
 *    @brief Creates a vector using 2 values.
 *    @param x_value value of X.
 *    @param y_value value of Y.
 *    @return The vector.
 */
t_vector *ft_create_vector(int x_value, int y_value);

/*
 *    @brief Creates an element using the data.
 *    @param *data The data to store in the element.
 *    @return The pointer to the created element.
 */
t_list *ft_create_elem(void *data);

/*
 *    @brief Push an element created using the data to the beginning head.
 *    @param **begin_list The head to push the data in. 
 *    @param *data The data to store in the element.
 */
void ft_list_push_front(t_list **begin_list, void *data);

/*
 *    @brief Iterates over the head and returns the size.
 *    @param *begin_list The head of the list.
 *    @return The size of the list.
 */
int ft_list_size(t_list *begin_list);

/*
 *    @brief Iterates over the head and returns the last element.
 *    @param *begin_list The head of the list.
 *    @return The last element of the list.
 */
t_list *ft_list_last(t_list *begin_list);

/*
 *    @brief Push an element created using the data to the end of the head.
 *    @param **begin_list The head to push the data in.
 *    @param *data The data to store in the element.
 */
void ft_list_push_back(t_list **begin_list, void *data);

/*
 *    @brief Creates a list of strings pointed by strs and returns the first element.
 *    @param size The number of strings.
 *    @param **strs The data to store in the element.
 */
t_list *ft_list_push_strs(int size, char **strs);

#endif