/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_integers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcornea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 23:49:14 by alcornea          #+#    #+#             */
/*   Updated: 2017/01/11 16:48:26 by alcornea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_integers(intmax_t num, int *value, char *get, t_arg mod)
{
	char		*str;
	int			len;
	int			m;

	m = 0;
	g_nb = num;
	str = convert_long_long_to_ascii(num, 10);
	len = ft_strilen(str);
	if (mod.precision)
	{
		str = handle_int_precision(str, mod);
		((num < 0 && !mod.precision) || (mod.precision && num < 0 )) ?
		str = ft_strjoin("-", str) : (0);
		m = 1;
	}
	if (mod.precision == 0 && num == 0 && ft_strchr(get, '.'))
		str[0] = '\0';
	(mod.width) ? str = handle_int_width(str, mod, m) : (0);
	if ((mod.flag_plus || mod.flag_space) && g_nb >= 0)
		handle_all_flags(value, &str, mod);
	ft_putstr(str);
	m ? free(str) : (0);
	*value += len;
}

void	handle_integers(va_list arg, int *value, char *get, t_arg mod)
{
	intmax_t	num;
	int				flag;

	flag = 0;
	if (mod.len_ll || mod.len_l)
		num = va_arg(arg, long long);
	else if (mod.len_hh)
	{
		handle_sign_char(arg, value, get, mod);
		flag = 1;
	}
	else if (mod.len_j)
		num = va_arg(arg, intmax_t);
	else if (mod.len_z)
		num = va_arg(arg, ssize_t);
	else
		num = va_arg(arg, int);
	!flag ? convert_integers(num, value, get, mod) : (0);
}
