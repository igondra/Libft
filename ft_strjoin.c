/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:01:15 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 16:01:15 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin (char const *s1, char const *s2)
{
	char	*strs1s2;
	size_t	strs1s2_size;

	strs1s2_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	strs1s2 = (char	*)malloc(strs1s2_size);
	if (!strs1s2)
		return(0);
	ft_strlcpy(strs1s2, s1, ft_strlen(s1) + 1);
	ft_strlcat(strs1s2, s2, strs1s2_size);
	return(strs1s2);
}

/* int	main(void)
{
	char	*str1 = "Hola a todas";
	char	*str2 = " Agur a todas";
	char	*str1str2;
	printf("La primera frase es: %s	La segunda frase es: %s\n", str1, str2);
	str1str2 = ft_strjoin(str1, str2);
	printf("La suma de las frases es: %s", str1str2);
	return (0);
} */
