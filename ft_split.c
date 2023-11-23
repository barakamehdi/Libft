/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:31:31 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/23 17:46:33 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_free(char **str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str && str[i])
			free(str[i++]);
		free(str);
	}
	str = NULL;
	return (str);
}

char	**split(char const *s, char c, int i)
{
	size_t	word_len;
	char	**lst;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
				s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			if (!lst[i - 1])
				return (ft_free(lst));
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**lst;

	i = 0;
	if (!s)
	{
		lst = malloc(1 * sizeof(char *));
		lst[0] = NULL;
		return (lst);
	}
	lst = split(s, c, i);
	return (lst);
}
