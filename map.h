/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 12:39:36 by jschmele          #+#    #+#             */
/*   Updated: 2019/03/02 04:37:00 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct	s_map
{
	char		*map;
	int			len;
}				t_map;

t_map			map_create(int size, int offset);
int				size_map(int i);
int				print_map(t_map map);

#endif
