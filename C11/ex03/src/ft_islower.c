int ft_islower(char *string)
{
  int i = 0;
  while (string[i] != '\0')
  {
    if ((string[i] < 'a' || string[i] > 'z'))
    {
      return 0;
    }
    i++;
  }
  return 1;
}