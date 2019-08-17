#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

void    wdmatch(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s2[i])
    {
        if (s1[j] == '\0')
        {
            ft_putstr(s1);
            ft_putstr("\n");
            return ;
        }
        if (s2[i] == s1[j])
            j++;
        i++;
    }
    if (s1[j] == '\0')
        ft_putstr(s1);
}

int     main(int argc, char *argv[])
{
    if (argc == 3)
        wdmatch(argv[1], argv[2]);
    ft_putstr("\n");
    return (0);
}
