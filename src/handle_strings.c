/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_strings.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcornea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 23:49:14 by alcornea          #+#    #+#             */
/*   Updated: 2017/01/11 16:48:26 by alcornea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_s_width(char **str, t_arg mod)
{
	char *tmp;

	if (mod.width > ft_strilen(*str))
	{
		if (mod.flag_minus)
		{
			tmp = ft_memalloc(mod.width - ft_strilen(*str) + 1);
			tmp = ft_memset(tmp, ' ', mod.width - ft_strilen(*str));
			*str = ft_strjoin(*str, tmp);
		}
		else
		{
			tmp = ft_memalloc(mod.width - ft_strilen(*str) + 1);
			tmp = ft_memset(tmp, ' ', mod.width - ft_strilen(*str));
			*str = ft_strjoin(tmp, *str);
		}
	}
}

void	ft_process_s_flag_zero(char **str, t_arg mod)
{
	char	*tmp;

	if (mod.width > ft_strilen(*str))
	{
		tmp = ft_memalloc(mod.width - ft_strilen(*str) + 1);
		tmp = ft_memset(tmp, '0', mod.width - ft_strilen(*str));
		*str = ft_strjoin(tmp, *str);
	}
}

void	null_str_precision(int *value, char *get, t_arg mod)
{
	char *str;

	str = ft_strdup("(null)");
	if (mod.precision < ft_strilen(str))
		str = ft_strsub(str, 0, mod.precision);
	if (mod.precision == 0 && ft_strchr(get, '.'))
		str = ft_strdup("");
	if (mod.width)
	{
		if (mod.flag_zero)
			ft_process_s_flag_zero(&str, mod);
		ft_process_s_width(&str, mod);
	}
	ft_putstr(str);
	*value += ft_strilen(str);
	free(str);
}

void	ft_process_s_val_str(char *str, int *value, char *get, t_arg mod)
{
	if (mod.precision && mod.precision < ft_strilen(str))
		str = ft_strsub(str, 0, mod.precision);
	if (mod.precision == 0 && ft_strchr(get, '.'))
		str = ft_strdup("");
	if (mod.width)
	{
		if (mod.flag_zero)
			ft_process_s_flag_zero(&str, mod);
		ft_process_s_width(&str, mod);
	}
	ft_putstr(str);
	*value += ft_strilen(str);
}

void	handle_strings(va_list arg, int *value, char *get, t_arg mod)
{
	char *str;

	if (mod.len_l)
		handle_ls_string(arg, value, get, mod);
	else
	{
		str = va_arg(arg, char *);
		if (str)
			ft_process_s_val_str(str, value, get, mod);
		else if (!str && ft_strchr(get, '.'))
			null_str_precision(value, get, mod);
		else
		{
			ft_putstr("(null)");
			*value += 6;
		}
	}
}
