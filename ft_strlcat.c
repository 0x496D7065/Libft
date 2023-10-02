/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:56:32 by lpetit            #+#    #+#             */
/*   Updated: 2023/09/09 13:16:08 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcat(char *dst, char const *src, size_t sz)
{
	size_t	i;
	size_t	l;
	size_t	srclen;
	size_t	dstlen;

	if (!dst || !src)
		return (0);
	i = 0;
	srclen = 0;
	dstlen = 0;
	while (dst[dstlen] && dstlen < sz)
		dstlen++;
	while (src[srclen])
		srclen++;
	if (dstlen == sz)
		return (dstlen + srclen);
	l = dstlen;
	while (src[i] && l < sz - 1)
		dst[l++] = src[i++];
	dst[l] = '\0';
	return (dstlen + srclen);
}
