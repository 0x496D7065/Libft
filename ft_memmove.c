/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:46:10 by lpetit            #+#    #+#             */
/*   Updated: 2023/10/17 12:31:56 by lpetit           ###   ########.fr       */
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


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str0[100] = "abcdefgh";

	char str2[100] = "abcdefgh";

	char str3[100] = "abcdefgh";

	char str4[100] = "abcdefgh";

	char str5[100] = "abcdefgh";

	char str6[100] = "abcdefgh";

	printf("ft_right-to-left str0 =%s\n", ft_memmove(str0 + 1, str0, 9));
	printf("move_right-to-left str2 =%s\n", memmove(str2 + 1, str2, 9));

	printf("ft_left-to-right str3 =%s\n", ft_memmove(str3 + 1, str3 + 2, 7));
	printf("move_left-to-right str4 =%s\n", memmove(str4 + 1, str4 + 2, 7));

	printf("ft_complete-overlap str5 =%s\n", ft_memmove(str5 , str5, 9));
	printf("move_complete-overlap str6 =%s\n", memmove(str6 , str6, 9));
}
