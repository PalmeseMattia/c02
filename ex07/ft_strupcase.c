int	ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return c;
}

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while(str[n])
	{
		str[n] = ft_toupper(str[n]);
	}
	return (str);
}
