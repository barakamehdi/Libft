/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:27:21 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/16 16:18:58 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
char *ft_strchr (const char *s, int c)
{
    size_t i ;
    char  *p;
    
    p = (char *) s;
    i = 0;
    while (*p)
    {
        if (*p  == (char)c)
            return  (p);
        p++;
    }
    return (NULL);
}

