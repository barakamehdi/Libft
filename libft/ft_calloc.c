/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:36:40 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/16 16:19:45 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
void *ft_calloc (size_t count, size_t size)
{
    void *res;
    res = malloc (count * size);
    if (!res)
        return (NULL);
    ft_bzero(res,count * size);
    //ft_memset(res, 0, count * size);
    return (res);
}