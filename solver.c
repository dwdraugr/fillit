/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:55:28 by jschmele          #+#    #+#             */
/*   Updated: 2019/03/02 07:33:08 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "map.h"

static void	remove_figure(char *map, int c, t_trio trio, int len)
{
	t_trio	fig;

	fig = trio_transform(trio, len, c);
	map[c] = '.';
	map[fig.c1] = '.';
	map[fig.c2] = '.';
	map[fig.c3] = '.';
}

static void	place_fig(t_map m, int c, t_trio trio, int count)
{
	int		len;
	t_trio	fig;

	len = m.len;
	fig = trio_transform(trio, len, c);
	m.map[c] = 'A' + count;
	m.map[fig.c1] = 'A' + count;
	m.map[fig.c2] = 'A' + count;
	m.map[fig.c3] = 'A' + count;
}

/*
**  Функция пытается поставить фигуру в с координату
**	если может, то ставит
**	Если поставила возвращает 1, иначе 0
*/

static int	is_placable(t_map m, int c, t_trio trio)
{
	int		len;
	t_trio	fig;

	len = m.len;
	fig = trio_transform(trio, len, c);
	if ((c < len * len && fig.c1 < len * len && fig.c2 < len * len &&
		fig.c3 < len * len) && (m.map[c] == '.' && m.map[fig.c1] == '.' &&
		m.map[fig.c2] == '.' && m.map[fig.c3] == '.'))
	{
		if ((c % len - ((trio.c1 + 3) / 10 * 10 - trio.c1) >= len) ||
			(c % len - ((trio.c2 + 3) / 10 * 10 - trio.c2) >= len) ||
			(c % len - ((trio.c3 + 3) / 10 * 10 - trio.c3) >= len) ||
			(c % len - ((trio.c1 + 3) / 10 * 10 - trio.c1) < 0) ||
			(c % len - ((trio.c2 + 3) / 10 * 10 - trio.c2) < 0) ||
			(c % len - ((trio.c3 + 3) / 10 * 10 - trio.c3) < 0))
			return (0);
		else
			return (1);
	}
	return (0);
}

static int	brute_force(t_map map, int *tetriminos, t_trio *masks, int count)
{
	int	i;

	if (tetriminos[count] == -1)
		return (print_map(map));
	i = -1;
	while (++i < map.len * map.len)
	{
		if (is_placable(map, i, masks[tetriminos[count]]))
		{
			place_fig(map, i, masks[tetriminos[count]], count);
			if (brute_force(map, tetriminos, masks, count + 1))
				return (1);
			else
				remove_figure(map.map, i, masks[tetriminos[count]], map.len);
		}
	}
	return (0);
}

/*
**	Функция основного алгоритма
*/

void		solver(int *tetriminos, t_trio *masks)
{
	int		i;
	t_map	map;
	int		len;

	len = tetriminos_count(tetriminos);
	map = map_create(len, 0);
	i = 0;
	while (brute_force(map, tetriminos, masks, 0) == 0)
	{
		free(map.map);
		i++;
		map = map_create(len, i);
	}
	free(map.map);
}
