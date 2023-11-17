/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:33:34 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/15 11:46:01 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *str;
    unsigned int    i;
    unsigned int    j;
    unsigned int    slen;

    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    i = start;
    j = 0;
    if (start < slen)
    {
        while (i < start + len && s[i])
        {
            str[j] = s[i];
            j++;
            i++;
        }
    }
    str[j] = '\0';
    return (str);
}
// #include <stdio.h>
// int main()
// {
//     // char str [] = "";
//     // int d ;
//     // printf("%s",ft_substr("hdhd slks;dfjdfj hdhd",5,0));
// }