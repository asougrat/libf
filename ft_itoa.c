#include <stdio.h>

void    ft_nbr(long long nbr, int len, char *r)
{
    int    i;

    i = 0;
    while (nbr)
    {
        r[len--] = 48 + (nbr % 10);
        nbr /= 10;
    }
}

int    ft_len(int n)
{
    int    c;

    c = 0;
    if (n < 0)
        c++;
    while (n)
    {
        n /= 10;
        c++;
    }
    return (c);
}

char    *ft_itoa(int n)
{
    long long    nb;
    int            len;
    char        *r;

    len = ft_len(n);
    if (!len)
    {
        r = (char *)malloc(2);
        r[0] = '0';
        r[1] = 0;
        return (r);
    }
    r = (char *)malloc(len * sizeof(char) + 1);
    if (!r)
        return (NULL);
    r[len--] = 0;
    nb = n;
    if (nb < 0)
    {
        nb *= -1;
        r[0] = '-';
    }
    ft_nbr(nb, len, r);
    return (r);
}

int main() {
    printf("%s",ft_itoa(-16));

    return 0;
}