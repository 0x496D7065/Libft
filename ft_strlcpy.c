/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:21:46 by lpetit            #+#    #+#             */
/*   Updated: 2023/09/09 13:16:17 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcpy(char *dest, char const *src, size_t sz)
{
	size_t	i;
	size_t	srclen;

	if (!dest || !src)
		return (0);
	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (sz == 0)
		return (srclen);
	while (src[i] && i < (sz - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
