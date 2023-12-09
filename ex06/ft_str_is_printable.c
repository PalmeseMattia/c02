int	ft_isprint(int c)
{
    if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	while(*str)
	{
		if(!ft_isprint(*str))
			return (0);
	}
	return (0);
}
