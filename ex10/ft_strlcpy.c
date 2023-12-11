unsigned int ft_strlcpy(char *dst, const char *src, unsigned int size)
{
    const char *s = src;
	unsigned char *d = (unsigned char *)dst;
    unsigned int n = size;

    while (n--)
    {
        if ((*d++ = *s++) == '\0'){
        break;
        }
    }
    if (n == 0) {
		if (size != 0)
			*d = '\0';
		while (*s++);
	}
    return(s - src - 1);
}