/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 05:17:42 by lpetit            #+#    #+#             */
/*   Updated: 2023/10/19 05:47:30 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char	*s_byte;
	unsigned char	c_val;
	size_t			i;

	s_byte = (unsigned char *)s;
	c_val = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_byte[i] == c_val)
			return (s_byte + i);
		if (s_byte[i] == '\0')
			return (NULL);
		i++;
	}
	return (NULL);
}
