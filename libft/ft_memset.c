/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:39:49 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/17 00:12:43 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"
void *ft_memset(void *s, int c, size_t len)
{
    size_t i;
    unsigned char *str = (unsigned char *)s;
    i = 0;
    while (i < len)
    {
        str[i] = (unsigned char)c; 
        i++;
    }
    return s;
}
// #include <stdio.h>
// int main()
// {
//     int ar[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int c = 7;
//     printf("%d\n",(int *)ft_memset(ar,c,0));
//     return 0;
// }
