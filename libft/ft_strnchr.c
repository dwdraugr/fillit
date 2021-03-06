/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:42:42 by jschmele          #+#    #+#             */
/*   Updated: 2018/12/26 21:42:42 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strnchr(const char *s, char ch, int n)
{
	int		res;

	if (ch == '\0' || !s)
		return (-1);
	res = 0;
	while (*s)
	{
		if (*s == ch)
			n--;
		if (n == 0)
			return (res);
		res++;
		s++;
	}
	return (-1);
}
