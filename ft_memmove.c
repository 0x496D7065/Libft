/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:46:10 by lpetit            #+#    #+#             */
/*   Updated: 2023/09/12 15:02:47 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	unsigned char	*dest_byte;
	unsigned char	*src_byte;
	unsigned char	tmp;

	dest_byte = (unsigned char *)dest;
	src_byte = (unsigned char *) src;
	while (n > 0)
	{
		tmp = *src_byte++;
		*dest_byte++ = tmp;
		n--;
	}
	return (dest);
}
