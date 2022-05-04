/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:03:16 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 10:03:16 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr (const char *s, int c)
{
	int i;
	char *str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&str[i]);
	return (0);
}

int	main(void)
{
	const char str[] = "AndrEider";
	int 	coincidence;
	char	*solution;
	char	*solution_ft;

	coincidence = 'd'; // Funciona sin tener que sumar + 256
	solution = ft_strchr(str, coincidence);
	printf("ft_strchr funcion: %s\n", solution);
	solution_ft = strchr(str, coincidence);
	printf("strchr funcion: %s\n", solution_ft);
	return (0);
}
