/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:12:50 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/25 11:41:37 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *txt)
{
	size_t i;

	i = 0;
	while (txt && txt[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tab;

	i = 0;
	if (!(tab = malloc(size * count)))
		return (NULL);
	while (i < count)
	{
		tab[i] = '\0';
		i++;
	}
	return ((void *)tab);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*newtab;
	size_t		size;
	size_t		i;

	i = 0;
	size = ft_strlen(&s[start]);
	if (size > len)
		size = len;
	if (!(newtab = ft_calloc(size + 1, sizeof(char))))
		return (NULL);
	while (i < size)
	{
		newtab[i] = s[start + i];
		i++;
	}
	return (newtab);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(tab = ft_calloc((size + 1), sizeof(char))))
		return (NULL);
	while (s1 && s1[j])
	{
		tab[j] = s1[j];
		j++;
	}
	while (s2 && s2[i])
	{
		tab[i + j] = s2[i];
		i++;
	}
	return (tab);
}
