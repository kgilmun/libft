char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int  len, i;
  char *result;

  if ( s == NULL || f == NULL)
    return (NULL);

  len = 0;
  while (s[i] != '\0')
    len++;
  result = (char *)malloc((len + 1) * sizeof(char));
  if (result == NULL)
    return (NULL);
  i = 0;
  while (i < len)
  {
    result[i] = f(i, s[i]);
    i++;
  }
  result[i] = '\0';
  return (result);
}
