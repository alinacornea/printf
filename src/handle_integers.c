/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_integers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcornea <alcornea@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 23:49:14 by alcornea          #+#    #+#             */
/*   Updated: 2017/07/07 14:30:47 by alcornea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*handle_int_precision(char *str, t_arg mod)
{
	char	*tmp;
	int		size;

	size = mod.precision - ft_strilen(str);
	if (mod.precision > ft_strilen(str))
	{
		if (mod.flag_space && !(mod.width > mod.precision))
			size++;
		tmp = ft_memalloc(size + 1);
		tmp = ft_memset(tmp, '0', size);
		str = ft_strjoin(tmp, str);
		tmp ? ft_strdel(&tmp) : (0);
	}
	return (str);
}

void	convert_integers(intmax_t num, int *value, char *get, t_arg mod)
{
	int			m;
	int			len;
	char		*str;
	char		*tmp;

	m = 0;
	g_nb = num;
	tmp = NULL;
	str = convert_long_long_to_ascii(num, 10);
	len = ft_strilen(str);
	if (mod.precision)
	{
		tmp = handle_int_precision(str, mod);
		str = tmp;
		if (num < 0)
			str = ft_strjoin("-", str);
		(mod.precision > len) ? m = 1 : (0);
	}
	if (num < 0 && !mod.precision && !mod.width)
		str = ft_strjoin("-", str);
	if (!mod.precision && !num && ft_strchr(get, '.'))
		str[0] = '\0';
	if ((mod.flag_plus || mod.flag_space) && g_nb >= 0)
		handle_all_flags(value, &str, mod);
	(!mod.width) ? ft_putstr(str) : handle_int_width(str, mod);
	(m) ? free(tmp) : (0);
	(num < 0 && !mod.width) ? free(str) : (0);
	*value += len;
}

void	handle_integers(va_list arg, int *value, char *get, t_arg mod)
{
	intmax_t	num;
	int				flag;

	flag = 0;
	if (mod.len_ll || mod.len_l)
		num = va_arg(arg, long long);
	// else if (mod.len_hh)
	// {
	// 	handle_sign_char(arg, value, get, mod);
	// 	flag = 1;
	// }
	else if (mod.len_j)
		num = va_arg(arg, intmax_t);
	else if (mod.len_z)
		num = va_arg(arg, ssize_t);
	else
		num = va_arg(arg, int);
	!flag ? convert_integers(num, value, get, mod) : (0);
}
