/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trio.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmele <jschmele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 02:57:43 by jschmele          #+#    #+#             */
/*   Updated: 2019/03/02 07:33:08 by jschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIO_H
# define TRIO_H

typedef unsigned char	t_char;

typedef struct			s_trio
{
	t_char				c1;
	t_char				c2;
	t_char				c3;
}						t_trio;

void					trio_set(t_trio *set, t_char c1, t_char c2, t_char c3);
t_trio					trio_transform(t_trio t, int len, int c);

#endif
