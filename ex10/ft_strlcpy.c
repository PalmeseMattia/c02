/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:35:56 by dpalmese          #+#    #+#             */
/*   Updated: 2023/12/11 10:44:08 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	const char			*s;
	unsigned char		*d;
	unsigned int		n;

	*s = src;
	d = (unsigned char *)dst;
	n = size;
	while (n--)
	{
		if (*s == '\0')
		{
			break;
        }
		*d = *s;
		d++;
		s++;
	}
	if (n == 0) {
		if (size != 0)
			*d = '\0';
		while (*s++);
	}
    return(s - src - 1);
}
