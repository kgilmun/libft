void  *ft_memset(void *p, int c, size_t n)
{
  unsigned char  *ptr;
  unsigned char  value;
  size_t  i;
  
  ptr = (unsigned char *)p;
  value = (unsigned char *)c;
  i = 0;
  while (i < n)
  {
    ptr[i] = c;
    i++;
  }
}
