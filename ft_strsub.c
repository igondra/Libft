/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:44:23 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 13:44:23 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *strsub;

    if (ft_strlen(s) < (len + start))
        len = ft_strlen(s) - start;
    strsub = (char *)malloc(len + 1);
    if (!strsub)
        return(0);
    ft_strlcpy(strsub, &s[start], len + 1); 
    return(strsub);
}

/* int main(void)
{
    char            *string = "Hola a todos";
    char            *substring;
    size_t          length;
    unsigned int    empieza;

    length = 7;
    empieza = 7;
    substring = ft_strsub(string, empieza, length);
    printf("Funcion ft_strsub: %s\n", substring);
    return (0);
} */
