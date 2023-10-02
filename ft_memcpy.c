/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:29:18 by lpetit            #+#    #+#             */
/*   Updated: 2023/09/09 16:01:00 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	unsigned char	*dest_byte;
	unsigned char	*src_byte;

	dest_byte = (unsigned char *)dest;
	src_byte = (unsigned char *)src;
	while (n > 0)
	{
		*dest_byte++ = *src_byte++;
		n--;
	}
	return (dest);
}
