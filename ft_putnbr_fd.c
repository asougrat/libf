// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}

void    ft_putstr_fd(char *s, int fd)
{
    int    i;

    i = 0;
    if (!s)
        return ;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putstr_fd("-214748364", fd);
        n = 8;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
        ft_putchar_fd(n + 48, fd);
}

int main() {
    
    ft_putnbr_fd(6,1);

    return 0;
}