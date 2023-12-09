int	ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return c;
}

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while(str[n])
	{
		str[n] = ft_tolower(str[n]);
	}
	return (str);
}
