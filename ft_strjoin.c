/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkutlu <zkutlu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:47:43 by zkutlu            #+#    #+#             */
/*   Updated: 2025/06/25 20:35:53 by zkutlu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *result;
	int s1_len;
	int s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc(sizeof(char)*(s1_len + s2_len + 1));
	if(!result)
		return (NULL);
	result[0] = '\0';
	ft_strlcat(result,s1,s1_len + 1);
	ft_strlcat(result,s2,s1_len + s2_len + 1);
	result[s1_len + s2_len] = '\0';
	return (result);
	
}
int main()
{
	char s1[]= "merhaba";
	char s2[] = "ece";
	
	printf("%s\n",ft_strjoin(s1,s2));
}