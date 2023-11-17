/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 00:46:30 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/17 22:12:55 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
size_t ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    size_t i;
    size_t len;
    
    // if(!src && !dest)
    //     return 0;
    len =  ft_strlen(src); 
    if (dstsize == 0)
        return (len);
    i = 0;
    while (i < dstsize - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (len);
}
