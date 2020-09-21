/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <mqueguin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 14:45:40 by mqueguin          #+#    #+#             */
/*   Updated: 2020/09/18 20:08:42 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	while (i < start)
		i++;
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	j = 0;
	while (s[i] && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*#include <stdio.h>

int		main(void)
{
	printf("%s", ft_substr("Salut comment ca va ?", 6, 4));
	return (0);
}*/
