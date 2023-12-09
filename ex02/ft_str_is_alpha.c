int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_isalpha(*str))
			return (0);
		str++;
	}
	return (1)
}
