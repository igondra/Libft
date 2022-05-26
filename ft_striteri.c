/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:36:32 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/20 11:57:11 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	ft_change(unsigned int i, char *str)
{
		*str = *str + i;
}

int	main(void)
{
	char	string[] = "Holaaaagurrrr";
	printf("string sin modificar = %s\n", string);
	ft_striteri(string, ft_change);
	printf("string modificada = %s\n", string);
	return(0);
} */
