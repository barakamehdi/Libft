/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 02:27:18 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/21 06:09:12 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*p;

	p = (char *)str;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (p[i] == (char)c)
			return (p + i);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>
// int main(int ac ,char **av)
// {
//     char str[] = "mehdibaraka";
//     printf ("%s\n",ft_strrchr("" ,'\0') );
//     // printf ("%s\n",strrchr("" ,'\0') );

// }
// printf(" the len is %d\n", i);
