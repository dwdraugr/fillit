/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:42:42 by jschmele          #+#    #+#             */
/*   Updated: 2018/12/26 21:42:42 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strshift(char **str, size_t n)
{
	char	*res;

	if (!str || !(*str))
		return (NULL);
	res = ft_strsub(*str, n, ft_strlen(*str) - n);
	if (!res)
		return (NULL);
	free(*str);
	*str = NULL;
	return (res);
}
