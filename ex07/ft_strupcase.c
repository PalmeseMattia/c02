/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:12:20 by dpalmese          #+#    #+#             */
/*   Updated: 2023/12/11 10:12:54 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		str[n] = ft_toupper(str[n]);
		str++;
	}
	return (str);
}
