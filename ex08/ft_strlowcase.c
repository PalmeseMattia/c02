/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:13:40 by dpalmese          #+#    #+#             */
/*   Updated: 2023/12/11 10:14:15 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		str[n] = ft_tolower(str[n]);
		str++;
	}
	return (str);
}
