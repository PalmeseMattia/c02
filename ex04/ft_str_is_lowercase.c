int	ft_islower(int c)
{
    if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while(*str)
	{
		if(!ft_islower(*str))
			return (0);
	}
	return (0);
}
