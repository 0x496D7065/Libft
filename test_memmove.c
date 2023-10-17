/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:03:38 by lpetit            #+#    #+#             */
/*   Updated: 2023/10/17 12:29:37 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (!dest && !src)
        return (NULL);
    while (n--)
        *((unsigned char *)dest + n) = *((unsigned char *)src + n);
    return (dest);
}

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *str_dst;
    unsigned char   *str_src;    str_dst = (unsigned char *)dest;
    str_src = (unsigned char *)src;
    if (str_dst < str_src)
    {
        while (n--)
            *str_dst++ = *str_src++;
    }
    else
        ft_memcpy(dest, src, n);
    return (dest);
}

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
