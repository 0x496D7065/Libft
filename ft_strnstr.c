/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:55:42 by lpetit            #+#    #+#             */
/*   Updated: 2023/10/19 15:45:22 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	i;
	size_t	word;
	size_t	nedindex;

	if (!haystack && n == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < n)
	{
		word = 0;
		nedindex = 0;
		while (haystack[i + word] == needle[nedindex] && (i + word) <= n)
		{
			word++;
			nedindex++;
			if (needle[nedindex] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	*s = NULL;
	char	*s2 = "My name is Jeff";
	printf("ft = %s\n", ft_strnstr(s, s2, 0));
	printf("real = %s\n", strnstr(s, s2, 0));
}
*/
