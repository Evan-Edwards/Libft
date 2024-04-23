/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:45:31 by eedwards          #+#    #+#             */
/*   Updated: 2024/04/18 13:01:17 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && n > i)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *str1 = "Hello";
	const char *str2 = "Hello5";
	printf("Result is %i\n", ft_strncmp(str1, str2, 6));
}
*/