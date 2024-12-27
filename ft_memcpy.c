void  *ft_memcpy(coid *dest, const void *src, size_t count)
{
  unsigned char  *initial;
  unsigned char  *final;
  size_t  i;

  initial = (unsigned char *)src;
  initial = (unsigned char *)dest;
  i = 0;
  while (i < count)
  {
    final[i] = initial[i];
    i++;
  }
}
