#include <unistd.h>

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

void    ft_putstr(char *str)
{
    while (*str && (!(ft_isspace(*str))))
        write(1, str++, 1);
}

void    last_word(char *str)
{
    char *last;
    int i;

    i = 0;
    last = &str[i];
    while (str[i])
    {
        if (ft_isspace(str[i]))
        {
            if (str[i + 1] >= '!' && str[i + 1] <= '~')
                last = &str[i + 1];
        }
        i++;
    }
    if (last)
        ft_putstr(last);
}

int     main(int argc, char *argv[])
{
    if (argc == 2)
       last_word(argv[1]);
    ft_putstr("\n");
    return (0);
}
