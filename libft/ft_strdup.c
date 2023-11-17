/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:24:37 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/16 16:19:28 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
char  *ft_strdup(const char *src)
{
    char * s2;
    int i ;
    s2 = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
    
    i = 0;
    if (!s2)
        return (0);
    while (*src)
    {
        s2[i++] = *src++;
    }
    s2[i] = '\0';
    return (s2);
}