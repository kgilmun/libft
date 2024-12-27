int   ft_isalnum(int d)
{
  if ((d > 47 && d < 58) || (d > 64 && d < 91) || (d > 96 && d < 123))
    return (1);
  return (0);
}
