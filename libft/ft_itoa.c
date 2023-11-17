// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_itoa.c                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/11/15 22:09:01 by elbaraka          #+#    #+#             */
// /*   Updated: 2023/11/16 16:28:48 by elbaraka         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

# include "libft.h"
int t_nbr(int nbr)
{
    int len;

    if (nbr <= 0)
        len = 1;
    else
        len = 0;
    while (nbr)
    {
        nbr /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int nbr)
{
    long long   len;
    char        *str;

    len = t_nbr(nbr);
    str = malloc(len * sizeof(char *));
    if ((long long)nbr == -2147483648)
        return (ft_strdup("-2147483648"));
    str[len] = '\0';
    if (nbr == 0)
        str[0] = '0';
    if(nbr < 0)
    {
        str[0] = '-';
        nbr  = -nbr;
    }
    while (nbr)
    {
        str[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return(str);
}

// int main(){
//     char *str = ft_itoa(-10);
//     printf("%s\n", str);
// }