/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:44:50 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/21 05:58:45 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	d_len;
	size_t	j;

	if (!src || !size)
		return (ft_strlen(src));
	d_len = ft_strlen(dest);
	j = ft_strlen(dest);
	len = ft_strlen(src);
	if (d_len >= size)
		return (len + size);
	i = 0;
	while (src[i] && d_len + 1 < size)
	{
		dest[d_len] = src[i];
		d_len++;
		i++;
	}
	dest[d_len] = '\0';
	return (j + len);
}

// int main()
// {
//     char c;
//     //printf("[%lu]\n", strlcat(&c, "", 1));
//     printf("[%lu]\n", ft_strlcat(&c, "", 1));
// }
