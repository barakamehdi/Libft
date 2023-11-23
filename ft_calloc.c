/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:36:40 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/21 06:04:44 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	res = malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
