int	ft_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while(*str)
	{
		if(!ft_isupper(*str))
			return (0);
	}
	return (0);
}
