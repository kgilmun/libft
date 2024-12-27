int  ft_isalpha(int d)
{
  if ((d > 64 && d < 91) || (d > 96 && d < 123))
  {
    return (1);
  }
  return (0);
}
