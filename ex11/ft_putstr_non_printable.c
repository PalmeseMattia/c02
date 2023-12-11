/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:25:30 by dpalmese          #+#    #+#             */
/*   Updated: 2023/12/11 17:32:46 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define RUB 127
#define NUL 0
#define US 31

void	print_hex(char c)
{
	char	*hex_alphabet;
	char	hex[2];

	hex_alphabet = "0123456789abcdef";
	hex[0] = hex_alphabet[(c >> 4) & 0xF];
	hex[1] = hex_alphabet[c & 0xF];
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((*str >= NUL && *str <= US) || *str == RUB)
		{
			write(1, "\\", 1);
			print_hex(*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}
