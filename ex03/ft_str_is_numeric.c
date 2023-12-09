int	ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	while(*str){
		if(!ft_isdigit(*str))
			return (0);
		str++;
	}
	return 0;
}
