/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:09:29 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/17 16:12:08 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count ++;
	if (dstsize == 0)
		return (count);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}
/* Copies one string to another and always NUL-terminates the string. Always
returns the length of the string that it tried to create (length of src)*/
/*
#include <stdio.h>

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			*src;
	char			dest[50];
	unsigned int	size;

	size = 7;
	src = "Hellocanyouhearme";
	size = ft_strlcpy(dest, src, size);
	printf("size is %d\n", size);
	printf("%s\n", dest);
}
*/
