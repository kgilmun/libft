int ft_atoi( const char *str) {
  int i = 0;
  int signo = 1;
  int resultado = 0;
  while (str[i] != '\0') {
    while (str[i] == ' ')
      i++;
    if (str[i] == '\0')
      return 0;
    if (str[i] == '+' || str[i] == '-') {
      if (str[i] == '-')
        signo = -1;
      i++;
    }
    if (str[i] < '0' || str[i] > '9')
      return 0;
    while (str[i] > 47 && str[i] < 58) {
      resultado = resultado * 10 + (str[i] - '0');
      i++;
    }
    return (resultado * signo);
  }
  return 0;
}
