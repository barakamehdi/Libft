/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:27:21 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/21 20:34:58 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (*p)
	{
		if (*p == (char)c)
			return (p);
		p++;
	}
	if ((char)c == '\0')
		return (p);
	return (NULL);
}
// int main()
// {
// 	//printf("%s", ft_strchr("teste", 1024));
// 	int c = 1024;
// 	printf("%c", c);

// }
