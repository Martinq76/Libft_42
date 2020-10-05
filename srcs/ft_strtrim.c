/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <mqueguin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:08:21 by mqueguin          #+#    #+#             */
/*   Updated: 2020/10/05 18:09:45 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])

}

int		main(int ac, char **av)
{
	printf("Result : %s\n", ft_strtrim("Salut voila la chaine a trimer", "avct"));
	return (0);
}
