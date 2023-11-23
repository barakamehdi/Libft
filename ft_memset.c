/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:39:49 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/21 06:01:49 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// int main()
// {
//     char ar[7] = {1, 2, 3, 4, 5, 6, 7};
//     int c = 7;
//     int i = 0;
//     while (i < 7){
//     printf("%d\n",ft_memset(ar,c,7);
//     i++;
//     }
//     return (0);
// }
