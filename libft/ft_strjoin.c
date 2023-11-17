/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:35:18 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/13 18:21:52 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *j_str;
     
    i = 0;
    j = 0;
    if  (!s1 || !s2)
        return(0);
    j_str = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!j_str)
        return (NULL);
    while (s1[i])
    {
        j_str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        j_str[i + j] = s2[j];
        j++;   
    }
    j_str[i + j] = '\0';
    return (j_str);  
}