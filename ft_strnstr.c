char *strnstr(const char *haystack, const char *needle, size_t len) {
  size_t i = 0;
  int j = 0;
  //NO MOVER LAS DIRECCIONES, QUITAR TODOS LOS ASTERISCOS Y CAMVIARLO POR ÍNDICES
  if (*needle == '\0')
    return (haystack)
    return
  while (i < len && *haystack) {
    while (i < len && *haystack == needle[j]) {
      j++;
      ¿i++;?
    }
    if (needle[j] == '\0')
      return (needle);
    else
      j = 0;
  //CREO QUE TENGO QUE HACER OTRO CONTROL PARA QUE NO ME SUME LA i 2 VECES EN CASO DE QUE LAS LETRAS HAYAN SIDO IGUAL Y DESPUES DIFERENTES
  }
  return (NULL);
}

//QUE TAL ALGO TIPO:
while (haystack[i + j] == needle[j])
  j++;
if (needle[j] == '\0')
      return (needle);
else
      j = 0;
