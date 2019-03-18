/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyuntil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:42:42 by jschmele          #+#    #+#             */
/*   Updated: 2018/12/26 21:42:42 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_copyuntil(char *str, int c)
{
	char	*res;
	char	*symb;

	if (!str)
		return (NULL);
	symb = ft_strchr(str, c);
	if (!symb)
		return (NULL);
	res = ft_strnew(symb - str);
	if (!res)
		return (NULL);
	res = ft_strncpy(res, str, symb - str);
	return (res);
}
