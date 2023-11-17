/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:55:57 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/17 00:27:44 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
size_t ft_strlen(const char *s)  
{
	int i ; 
	i = 0;
	// if (!s)
	// 	return (0);
	while (s[i])
		i++;
	return ((size_t) i);
}