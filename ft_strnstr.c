char *strnstr(const char *haystack, const char *needle, size_t len) {
  size_t i = 0;
  size_t j = 0;
  if (*needle == '\0')
    return (haystack);
  while (i < len && haystack[i]) {
    j = 0;
    while (i + j < len && haystack[j] == needle[j])
      j++;
    if (needle[j] == '\0')
      return (haystack + i);
    else if (i + j == len)
      return (NULL);
    else
      i++;
  }
  return (NULL);
}
