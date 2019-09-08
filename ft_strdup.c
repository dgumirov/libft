/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 12:54:53 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/07 15:41:17 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		k;

	k = 0;
	while (s[k] != '\0')
		k++;
	if (!(dest = (char*)malloc(sizeof(s) * (k + 1))))
		return (0);
	dest[k] = '\0';
	while (k >= 0)
	{
		dest[k] = s[k];
		k--;
	}
	return (dest);
}
