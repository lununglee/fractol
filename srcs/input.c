/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 11:00:46 by llee              #+#    #+#             */
/*   Updated: 2019/01/28 11:00:54 by llee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		hook_keydown(int keycode, t_mlx *mlx)
{
	(void)mlx;
	if (keycode == 53)
		exit(0);
	return (0);
}
