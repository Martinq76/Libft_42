/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <mqueguin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:08:21 by mqueguin          #+#    #+#             */
/*   Updated: 2020/10/14 23:21:02 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		size;
	int		i;

	if (!s1 || !set)
		return (NULL);
	while (ft_check(*s1, set))
		s1++;
	size = ft_strlen(s1);
	while (ft_check(s1[--size], set) && size)
		;
	if (!(str = (char*)malloc(sizeof(char) * (size + 2))))
		return (NULL);
	i = 0;
	while (i <= size)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
