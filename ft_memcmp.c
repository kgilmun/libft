int memcmp(const void *ptr1, const void *ptr2, size_t n) {
  const unsigned char *p1 = (const unsigned char *)ptr1;
  const unsigned char *p2 = (const unsigned char *)ptr2;
  size_t i = 0;

  while (i < n && (*p1 && *p2) {
    if (*p1 != *p2)
      return (*p1 - *p2);
    p1++;
    p2++;
  }
  return (*p1 - *p2);
}
