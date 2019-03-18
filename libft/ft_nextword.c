/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextword.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:42:42 by jschmele          #+#    #+#             */
/*   Updated: 2018/12/26 21:42:42 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nextword(char const *s, char c)
{
	int	i;

	i = -1;
	if (!s || c == '\0')
		return (NULL);
	while (s[++i] && s[i] != c)
		;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
		return (NULL);
	return ((char *)s + i);
}
