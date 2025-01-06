char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int  i;

  i = 0;
  while (s[i] != '\0')
  {
    s[i] = f(i, s);
    i++;
  }
  return (s);
}
