/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:33:26 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/20 11:56:19 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

/* int	main(void)
{
	char	*string;
	
	string = "Hola a todo el mundo";
	ft_putendl_fd(string, 1);
    ft_putendl_fd(string, 1);
    ft_putendl_fd(string, 1);
} */
