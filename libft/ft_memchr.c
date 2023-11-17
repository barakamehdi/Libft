/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:43:46 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/16 16:18:48 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void *ft_memchr(const void *buf, int c, size_t n)
{
    size_t i ;
    unsigned char *src;
    unsigned char t;
    
    if(!buf)
        return NULL;
    src = (unsigned char *)buf;
    t = (unsigned char)c;
    i = 0;
    while(src[i] && i < n)
    {
        if (src[i] == t)
            return (void *)src + i;
        i++;
    }
    return (NULL); 
}
