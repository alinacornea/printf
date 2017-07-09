/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_plus_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcornea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 23:49:14 by alcornea          #+#    #+#             */
/*   Updated: 2017/01/11 16:48:26 by alcornea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_flag_plus(int *value, char **str, t_arg mod)
{
	char *f;

	f = ft_itoa_base(g_nb, 10);
	if (mod.width > ft_strilen(f) && g_nb >= 0 &&
			!mod.precision && (!mod.flag_plus || mod.flag_zero))
		*str[0] = '+';
	else if (mod.width < ft_strilen(f))
	{
		ft_putchar('+');
		*value += 1;
	}
	else if (mod.width && mod.flag_minus)
	{
		ft_putchar('+');
		*value += 1;
	}
	f ? ft_strdel(&f) : (0);
}

void	handle_flag_space(int *value, char **str, t_arg mod)
{
	char *f;

	f = ft_itoa_base(g_nb, 10);
	if (mod.width > ft_strilen(f) && g_nb >= 0 &&
			mod.precision > mod.width && !mod.flag_space)
		*str[0] = ' ';
	else if (mod.width > ft_strilen(f) && g_nb >= 0 &&
		mod.flag_space)
		*str[0] = ' ';
	else if (!mod.flag_space)
	{
		ft_putchar(' ');
		*value += 1;
	}
	else if (!mod.width)
	{
		ft_putchar(' ');
		*value += 1;
	}
	f ? free(f) : (0);
}

void	handle_all_flags(int *value, char **str, t_arg mod)
{
	if (mod.flag_plus && g_nb >= 0)
		handle_flag_plus(value, str, mod);
	else if (mod.flag_space && g_nb >= 0)
		handle_flag_space(value, str, mod);
}
