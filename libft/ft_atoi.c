/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:34:42 by elbaraka          #+#    #+#             */
/*   Updated: 2023/11/17 22:26:13 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
    int i;
    int sgn;
    int res;
    
    i = 0;
    sgn = 1;
    res = 0 ;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
            i++;
    if  (str[i] == '-' || str[i] ==  '+')
        {
            if (str[i] == '-')
                sgn = -1;
            i++;
        }
    // if(str[i] == '+')
    //     i++;
    while (str[i]>= 48 && str[i] <= 57)
    {
        res *= 10;
        res += (str[i]  - 48);
        i++;
    }
        return (res * sgn);
            
}
// #include <stdio.h>
// int main ()
// {
//     printf("%d\n",ft_atoi("));
//     printf("%d\n", atoi("-99999999999999999999999999999999999999"));
// }
