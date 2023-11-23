/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:33:34 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/23 15:59:18 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*dup;

	str = (char *)s;
	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(str + start))
	{
		dup = malloc(ft_strlen(str + start) + 1);
		if (!dup)
			return (NULL);
		len = ft_strlen(str + start);
	}
	else
	{
		dup = malloc(len + 1);
		if (!dup)
			return (NULL);
	}
	ft_strlcpy(dup, str + start, len + 1);
	return (dup);
}
// int main()
// {
//     char * str = strdup("1");
//     s = ft_substr(str, 42, 42000000);
//     // char str [] = "";
//     // int d ;
//     // printf("%s",ft_substr("hdhd slks;dfjdfj hdhd",5,0));
// }
	// if (start > slen)
	// 	return (ft_strdup(""));
