/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:25:37 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 16:25:37 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim (char const *s1, char const *set)
{
	char	*str_trim;
	size_t	str_trim_size;
	size_t	cnt_start;

	cnt_start = 0;
	while (ft_strchr(set, s1[cnt_start]))
		cnt_start++;
	str_trim_size = ft_strlen(s1);
	while (ft_strchr(set, s1[str_trim_size]))
		str_trim_size--;
	str_trim = (char *)malloc(sizeof(char) * (str_trim_size - cnt_start + 1));
	str_trim = ft_strsub(s1, cnt_start, str_trim_size - cnt_start + 1);
	return(str_trim);
}

int main(void)
{
	char s1[] = "lorem ipsum dolor sit amet";
	char set[] = "taoelm";

	printf("Esaldia osorik = %s\n", s1);
	printf("Esalditik kendu behar dena = %s\n", set);
	printf("Esaldia laburtuta = %s\n", ft_strtrim(s1, set));
	return (0);
}
