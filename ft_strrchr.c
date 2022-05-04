/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:03:16 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 10:03:16 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr (const char *s, int c)
{
	int i;
	char *str;

	str = (char *)s;
	i = strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (0);
}

/* int	main(void)
{
	const char str[] = "AndrEider";
	int 	coincidence;
	char	*solution;
	char	*solution_ft;

	coincidence = 'd';
	solution = ft_strrchr(str, coincidence);
	printf("ft_strrchr funcion: %s\n", solution);
	solution_ft = strrchr(str, coincidence);
	printf("strrchr funcion: %s\n", solution_ft);
	return (0);
} */
