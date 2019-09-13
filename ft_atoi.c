/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:29:30 by tvincent          #+#    #+#             */
/*   Updated: 2019/09/13 16:14:41 by tvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_space(const char *nptr)
{
	const char	*s;	

	while (*nptr && (*nptr == ' ' || *nptr == '\n' || *nptr == '\t' ||
			*nptr == '\v' || *nptr == '\f' || *nptr == '\r'))
		nptr++;
	s = nptr;
	return (s);	
}

static int		ft_limit(long long n, const char *s, int sign)
{
	long long	l_min;
	long long	l_max;

	l_min = ((n * 10) + (*s - '0')) * sign;
	if (l_min < -2147483648)
		return (0);
	l_max = ((n * 10) + (*s - '0')) * sign;
	if (l_max > 2147483647)
		return (-1);
	return (1);
}

int			ft_atoi(const char *nptr)
{
	int			res;
	int			sign;
	const char	*str;
	int			limit;

	sign = 1;
	res = 0;
	str = ft_space(nptr);
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		limit = ft_limit(res, str, sign);
		if (limit == 0 || limit == -1)
			return (limit);
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}
