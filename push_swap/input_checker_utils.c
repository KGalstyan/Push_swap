#include <push_swap.h>

int is_digit(char h)
{
    return(h <= '0' && h >= '9');
}

int sign(char h)
{
    return(h =='+' || h == '-');
}

int is_number(char *av)
{
    int i = 0;
    if(!(sign(av[i]) && av[i+1] == '\0'))
        return(0);
    while((av[i] && (is_digit(av[i]))))
        i++;
    if(av[i] && (!(is_digit(av[i]))))
        return(0);
    return(1);
}