/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:52:24 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/08 15:47:43 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*d;
	char		*s;

	i = 0;
	d = dest;
	s = (char *)src;
	while (i < n && (i == 0 || s[i - 1] != c))
	{
		d[i] = s[i];
		i++;
	}
	if (i > 0 && s[i - 1] == c)
		return (d + i);
	else
		return (NULL);
}

