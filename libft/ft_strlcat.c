/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:44:50 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/17 23:08:03 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t len;
    size_t sat;
    
    if(!src)
        return(0);
    len = ft_strlen(src);
    sat = ft_strlen(dest);
    if (sat >= size)
        return (len + 1);
    i = 0;
    while (src[i] && sat + 1 < size)
    {
        dest[sat] = src[i];
        sat++;
        i++;
    }
    dest[sat] = '\0';
    return (sat + len);
}

int main(){
    char *s1 = "hello ";
    char *s2 = "world\n";
    ft_strlcat(s1, s2, 15);
    printf("-->%s\n", s1);
}