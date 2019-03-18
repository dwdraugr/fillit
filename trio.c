/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trio.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 03:09:37 by jschmele          #+#    #+#             */
/*   Updated: 2019/03/02 07:33:08 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trio.h"
#include "fillit.h"

void		trio_set(t_trio *set, t_char c1, t_char c2, t_char c3)
{
	set->c1 = c1;
	set->c2 = c2;
	set->c3 = c3;
}

t_trio		trio_transform(t_trio t, int len, int c)
{
	t_trio	res;

	res.c1 = (c / len * len + ((t.c1 + 3) / 10 * len) +
		(c % len - ((t.c1 + 3) / 10 * 10 - t.c1)));
	res.c2 = (c / len * len + ((t.c2 + 3) / 10 * len) +
		(c % len - ((t.c2 + 3) / 10 * 10 - t.c2)));
	res.c3 = (c / len * len + ((t.c3 + 3) / 10 * len) +
		(c % len - ((t.c3 + 3) / 10 * 10 - t.c3)));
	c = 0;
	return (res);
}
