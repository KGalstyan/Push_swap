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

int is_zero(char *av)
{
    int i = 0;
    if(sign(av[i]))
        i++;
    while(av[i] && av[i] == '0')
        i++;
    if(av[i] != '\0')
        return(0);
    return(1);
}

int num_cmp(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    int res = 0;
    if(s1[i] == '+' && s2[j] != '+')
        i++;
    if(s1[i] != '+' && s2[j] == '+')
        j++;
    while ((s1[i] == s2[j]) && (s1[i] == '\0' && s2[j] == '\0'))
    {
		i++;
        j++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}

int have_duplicates(char **av)
{
    int i = 1;
    int j;

    while(av[i])
    {
        j = 1;
        while(av[j])
        {
            if(num_cmp(av[i] , av[j]) == 0)
                return(0);
            j++;
        }
        i++;
    }
    return(1);
}


int correct_input(char **av)
{
    int i = 0;
    int num_zero = 0;

    while(av[i])
    {
        if(!(is_number(av[i])))
            return(0);
        num_zero += is_zero(av[i]);
        i++;
    }
    if (num_zero > 1)
		return (0);
	if (have_duplicates(av))
		return (0);
	return (1);
}