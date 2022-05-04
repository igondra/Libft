/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:04:16 by marvin            #+#    #+#             */
/*   Updated: 2022/04/20 20:04:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
char    *ft_strtrim(char const *s1, char const *set)
{
   char    *strtrim;
   size_t  counter_s1_begin;
   size_t  counter_s1_end;
   size_t  counter_set;
   size_t  counter_strtrim;
 
   counter_s1_begin = 0;
   counter_s1_end = 0;
   counter_set = 1;
   counter_strtrim = 0;
   strtrim = (char *)malloc(sizeof(char) * strlen(s1));
   if (!(strtrim))
       return (NULL);
   while (set[counter_set - 1] != '\0')
   {
       if (s1[counter_s1_begin] == set[counter_set - 1] || s1[counter_s1_begin] == ' ')
       {
           counter_s1_begin++;
           counter_set = 0;
       }
       counter_set++;
   }
   counter_set = 1;
   while (set[counter_set - 1] != '\0')
   {
       if (s1[strlen(s1) - counter_s1_end - 1] == set[counter_set - 1] || s1[counter_s1_end] == ' ')
       {
           counter_s1_end++;
           counter_set = 0;
       }
       counter_set++;
   }
   while (counter_strtrim < (strlen(s1) - counter_s1_begin - counter_s1_end))
   {
       strtrim[counter_strtrim] = s1[counter_s1_begin + counter_strtrim];
       counter_strtrim++;
   }
   return (strtrim);
}
 
int main(void)
{
   char s1[] = "lorem ipsum dolor sit amet";
   char set[] = "tel";
 
   printf("Esaldia osorik = %s\n", s1);
   printf("Esalditik kendu behar dena = %s\n", set);
   printf("Esaldia laburtuta = %s\n", ft_strtrim(s1, set));
   return (0);
}
