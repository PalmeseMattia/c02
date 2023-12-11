/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:14:44 by dpalmese          #+#    #+#             */
/*   Updated: 2023/12/11 16:41:03 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

void	ft_strcapitalize(char *str)
{
	int	capitalize;

	capitalize = 1;
	while (*str)
	{
		if (isalpha(*str) && capitalize)
		{
			*str = toupper(*str);
			capitalize = 0;
		}
		else if (isalpha(*str) && !capitalize)
		{
			*str = tolower(*str);
		}
		else if (isdigit(*str) && capitalize)
		{
			capitalize = 0;
		}
		else if (!(isdigit(*str) || isalpha(*str)))
		{
			capitalize = 1;
		}
		str++;
	}
}
