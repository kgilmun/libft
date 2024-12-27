void  *ft_bzero(void *p, size_t n)
{
  unsigned char  *ptr;
  size_t  i;

  ptr = (unsigned char *)p;
  while (i < n)
  {
    ptr[i] = 0;
    i++;
  }
}
