/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:59:15 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/10 21:30:59 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
