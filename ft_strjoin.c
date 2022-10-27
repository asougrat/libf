char    *ft_strjoin(char const    *s1, char const    *s2)
{
    int        i;
    int        j;
    char    *str;

    if (!s1 || !s2)
        return ;
    i = strlen(s1);
    j = strlen(s2);
    str = (char *)malloc((i + j) * sizeof (char) + 1);
    if (!str)
        return;
    memmove(str, s1, i);
    memmove(str +i  , s2, j +1 );
    str[i + j] = 0;
    return (str);
}

int main()
{
 // char test[]=ft_strjoin("hello","world");
  printf("%s",ft_strjoin("hello","world"));
}