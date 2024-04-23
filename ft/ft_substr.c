/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:32:08 by eedwards          #+#    #+#             */
/*   Updated: 2024/04/18 17:52:42 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	
	if (ft_strlen(s) < len)
		//something
	if (ft_strlen(s) < start + len)
		//something
	sub = (char *) malloc(ft_strlen(s)- start + len);
	if (!sub)
		return (NULL);
	while (s[start] < s + start + len)
		

