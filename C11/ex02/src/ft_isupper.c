int ft_isupper(char *string)
{
  int i = 0;
  while (string[i] != '\0')
  {
    if ((string[i] < 'A' || string[i] > 'Z'))
    {
      return 0;
    }
    i++;
  }
  return 1;
}