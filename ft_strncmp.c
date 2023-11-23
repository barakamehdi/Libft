/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:44:56 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/21 06:08:49 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] && s2[i] && (s1[i] == s2[i]) && (i < n - 1)))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// int main()
// {
//     char *str = "abcdef";
//     char *s2 = "abcdefghijklmnop";

//     printf("-----> dyali %d/n", ft_strncmp(str,s2,7));
//     printf("------> dyalhoum %d/n", strncmp(str,s2,7));
// }
// while (i < n && s1[i] && s2[i] && (s1[i] == s2[i]))
	//     i++;
	// if (s1[i] != s2[i])
	//     return ((unsigned char )s1[i] - (unsigned char )s2[i]);
	//     return (0);
