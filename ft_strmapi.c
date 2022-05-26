/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:20:26 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/20 12:03:36 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_new;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	s_new = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (s_new == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s_new[i] = f(i, s[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}

/* char	ft_mayuscula(unsigned int change, char c)
{
	change = -32;
	return(c + change);
}

int	main(void)
{
	char *str;
	
	str = "kaixo a todes";
	printf("str sin modificar = %s\n", str);
	printf("str modificada: %s\n", ft_strmapi(str, ft_mayuscula));
} */
