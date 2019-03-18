/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:20:14 by jschmele          #+#    #+#             */
/*   Updated: 2019/03/01 19:20:59 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "trio.h"
#include "map.h"

t_map	map_create(int len, int offset)
{
	t_map	map;
	int		size;
	int		i;

	size = size_map(len);
	size += offset;
	map.map = (char *)malloc(sizeof(char) * (size * size + 1));
	map.len = size;
	map.map[size * size] = '\0';
	i = size * size;
	while (--i >= 0)
		map.map[i] = '.';
	return (map);
}

int		size_map(int i)
{
	int		j;

	j = 1;
	while (j * j < i * 4)
		j++;
	return (j);
}

int		print_map(t_map map)
{
	int	i;

	i = -1;
	while (++i < map.len)
	{
		write(1, map.map + map.len * i, map.len);
		write(1, "\n", 1);
	}
	return (1);
}
