/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:35:24 by jschmele          #+#    #+#             */
/*   Updated: 2019/03/02 07:33:08 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define MAX_TETRI 26
# define FIELD_SIZE 21

# include "libft/libft.h"
# include "trio.h"
# include <fcntl.h>

int		*reader(int fd, t_trio **masks);
void	solver(int *tetriminos, t_trio *masks);
int		translate(char *map, t_trio *masks);
int		check_symbols(char *buf);
int		check_mask(t_trio coord, t_trio *masks);
t_trio	*generate_masks(void);
int		tetriminos_count(int *tetriminos);

#endif
