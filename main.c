/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 04:53:42 by jschmele          #+#    #+#             */
/*   Updated: 2019/03/02 07:33:08 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		*tetriminos;
	t_trio	*masks;

	masks = NULL;
	if (argc != 2)
		ft_putstr("usage: ./fillit [filename]\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		tetriminos = reader(fd, &masks);
		close(fd);
		if (!tetriminos)
			ft_putstr("error\n");
		else
			solver(tetriminos, masks);
		free(tetriminos);
		free(masks);
	}
	return (0);
}
