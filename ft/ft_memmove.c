/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:59:51 by eedwards          #+#    #+#             */
/*   Updated: 2024/04/17 13:59:55 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if ((!dst && !src) || (dst == src))
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
			d++ = s++;
	}
	return (dst);
}
// The memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive