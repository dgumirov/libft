/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:52:05 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/07 11:17:40 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*s3;

	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)(malloc(sizeof(char *) * len + 1));
	ft_strcpy(s3, s1);
	ft_strcpy(s3, s2);
	return (s3);
}
