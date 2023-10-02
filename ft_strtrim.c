/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:59:32 by lpetit            #+#    #+#             */
/*   Updated: 2023/09/12 13:53:18 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	if (!set)
		return (0);
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	ft_trimcpy(char *cp, char const *s1, size_t start, size_t end)
{
	size_t	l;

	l = 0;
	while (start <= end)
		cp[l++] = s1[start++];
	cp[l] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*cp;

	start = 0;
	end = 0;
	if (!s1 || s1[0] == '\0')
	{
		cp = (char *)malloc(sizeof(char));
		cp[0] = '\0';
		return (cp);
	}
	while (s1[end])
		end++;
	end -= 1;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	while (s1[end] && ft_isset(s1[end], set))
		end--;
	cp = (char *)malloc(((end - start) + 2) * sizeof(char));
	if (!cp)
		return (NULL);
	ft_trimcpy(cp, s1, start, end);
	return (cp);
}
