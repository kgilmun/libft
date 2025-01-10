#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
  char digit;
  
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    if (n >= 10)
    {
        putnbr(n / 10);
    }

    digit = (n % 10) + '0';
    write(fd, &digit, 1);
}
