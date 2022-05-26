/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:44:23 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/20 12:34:17 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strsub;

	if (len > ft_strlen(s))
	{
		len = ft_strlen(s);
	}
	strsub = (char *)malloc(len + 1);
	if (start > ft_strlen(s))
	{
		*strsub = '\0';
		return (strsub);
	}
	if (!strsub)
	{
		return (0);
	}
	ft_strlcpy(strsub, &s[start], len + 1);
	return (strsub);
}

/* int	main(void)
{
	char			*string = "Hola a todos";
	char			*substring;
	size_t			length;
	unsigned int	begin;

	length = 20;
	begin = 400;
	substring = ft_substr(string, begin, length);
	printf("Funcion ft_substr: %s\n", substring);
	return (0);
} */
