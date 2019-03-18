/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:42:42 by jschmele          #+#    #+#             */
/*   Updated: 2018/12/26 21:42:42 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		sign;

	sign = (n >= 0) ? 1 : -1;
	i = ft_nbrlen(n) + ((sign > 0) ? 0 : 1);
	if (!(res = ft_strnew(i)))
		return (NULL);
	sign < 0 ? res[0] = '-' : 0;
	n == 0 ? res[0] = '0' : 0;
	while (n)
	{
		i--;
		res[i] = ((long)n * sign) % 10 + 48;
		n /= 10;
	}
	return (res);
}
