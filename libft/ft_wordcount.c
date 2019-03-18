/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:42:42 by jschmele          #+#    #+#             */
/*   Updated: 2018/12/26 21:42:42 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *str, char del)
{
	int	i;
	int	wc;
	int	flag;

	if (!str || del == '\0')
		return (-1);
	i = -1;
	wc = 0;
	flag = 0;
	while (str[++i])
	{
		if (str[i] == del)
			flag = 0;
		else if (!flag)
		{
			flag = 1;
			wc++;
		}
	}
	return (wc);
}
