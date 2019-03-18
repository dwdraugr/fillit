/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:42:42 by jschmele          #+#    #+#             */
/*   Updated: 2018/12/26 21:42:42 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	i = -1;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[++i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (needle[++j] && haystack[++k] && haystack[k] == needle[j])
				;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
	}
	return (NULL);
}
