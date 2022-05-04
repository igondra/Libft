/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:13:59 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 11:13:59 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr (const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	
	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char 	str_haystack[] = "Hola mi nombre es AndrEider";
	char 	str_needle[] = "nombre";
	char	*solution;
	char	*solution_ft;
	size_t	size;

	size = 25;
	solution_ft = ft_strnstr(str_haystack, str_needle, size);
	printf("ft_memcmp funcion: %s\n", solution_ft);
	solution = strnstr(str_haystack, str_needle, size);
	printf("memcmp funcion: %s\n", solution);
	return (0);
}
