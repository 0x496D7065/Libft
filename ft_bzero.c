/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:57:23 by lpetit            #+#    #+#             */
/*   Updated: 2023/09/04 12:29:51 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_byte;

	s_byte = (unsigned char *)s;
	if (!s)
		return ;
	while (n > 0)
	{
		*s_byte++ = 0;
		n--;
	}
	return ;
}
