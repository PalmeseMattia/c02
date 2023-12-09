#include <unistd.h>
#include <stdio.h>

char	*get_next_word(char *src){
	while((!(*src >= 'a' && *src <= 'z') && !(*src >= 'A' && *src <= 'Z') && !(*src >= '0' && *src <= '9')))
	{
		if(*src == '\0'){
			return src;
		}
		src++;
	}
	return src;
}

char	*get_endword(char *src)
{
	while((*src >= 'a' && *src <= 'z') || (*src >= 'A' && *src <= 'Z') || (*src >= '0' && *src <= '9'))
	{
		if(*src == '\0'){
			return src;
		}
		src++;
	}
	return src;
}

char	ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return c;
}

char	ft_tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return c;
}

void transform(char *start, char *end)
{
	int	n;

	n = 0;
	*start = ft_toupper(*start);
}

void	print_between(char *beg, char *end)
{
	int n;

	n = 0;
	while(beg + n != end)
	{
		write(1, (beg + n),1);
		n++;
	}
	write(1, "\n", 1);
}

int main()
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *word = get_next_word(test);
	while(*word)
	{
		char *end_of_word = get_endword(word);
		//printf("Word: %p\tEnd of: %p\n", word, end_of_word);
		//printf("At Word: %c\tAt End of: %c\n\n", *word, *end_of_word);
		transform(word);
		print_between(word, end_of_word);
		if(*end_of_word == '\0')
		{
			break;
		}
		word = get_next_word(end_of_word);
	}
	return 0;
}
