/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:29:18 by lpetit            #+#    #+#             */
/*   Updated: 2023/10/17 12:46:43 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	unsigned char	*dest_byte;
	unsigned char	*src_byte;

	dest_byte = (unsigned char *)dest;
	src_byte = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*dest_byte++ = *src_byte++;
		n--;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src = "abcdefgh";
	char	*dest[20];

	char	*dest2[20];
	size_t	n = 9;

	printf("ft =%s\n", ft_memcpy(dest, src, n));
	printf("Real =%s\n", memcpy(dest2, src, n));
}
