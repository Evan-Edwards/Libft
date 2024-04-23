/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:43:31 by eedwards          #+#    #+#             */
/*   Updated: 2024/04/17 12:13:38 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*start;

	start = dst;
	if (!dst && !src)
		return (dst);
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (start);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char src[50] = "Hello";
	char dst[50];
	ft_memcpy(dst, src, strlen(src) + 1);
	printf("%s\n", dst);
}
*/