/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:11:03 by dpalmese          #+#    #+#             */
/*   Updated: 2023/12/11 16:29:15 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_isprint(*str))
			return (0);
		str++;
	}
	return (1);
}
