/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcornea <alcornea@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 23:49:14 by alcornea          #+#    #+#             */
/*   Updated: 2017/07/07 13:40:52 by alcornea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*handle_negative_num(char *str, t_arg mod)
{
	char	*tmp;
	int		size;

	size = mod.width - ft_strilen(str);
	if (mod.flag_minus)
	{
		tmp = ft_memalloc(size);
		tmp = ft_memset(tmp, ' ', size - 1);
		str = ft_strjoin(str, tmp);
		(!mod.precision) ? str = ft_strjoin("-", str) : (0);
	}
	else if (mod.width > ft_strilen(str) && g_nb < 0)
	{
		(!mod.precision) ? str = ft_strjoin("-", str) : (0);
		size = mod.width - ft_strilen(str);
		tmp = ft_memalloc(size + 1);
		tmp = ft_memset(tmp, ' ', size);
		str = ft_strjoin(tmp, str);
	}	
	tmp ? ft_strdel(&tmp) : (0);
	return (str);
}

char	*handle_width_flag_minus(char *str, t_arg mod)
{
	char	*tmp;

	tmp = NULL;
	if (mod.width > ft_strilen(str) && !mod.precision && g_nb < 0)
		str = handle_negative_num(str, mod);
	else if (mod.width > ft_strilen(str) && !mod.precision && g_nb >= 0)
	{
		tmp = ft_memalloc(mod.width - ft_strilen(str) + 1);
		tmp = ft_memset(tmp, ' ', mod.width - ft_strilen(str));
		str = ft_strjoin(str, tmp);
		(mod.flag_plus) ? str[ft_strilen(str) - 1] = '\0' : (0);
	}
	else if (mod.width > ft_strilen(str) && mod.precision < mod.width)
	{
		tmp = ft_memalloc(mod.width - ft_strilen(str) + 1);
		tmp = ft_memset(tmp, ' ', mod.width - ft_strilen(str));
		str = ft_strjoin(str, tmp);
		(mod.flag_plus && g_nb > 0) ? str[ft_strilen(str) - 1] = '\0' : (0);
	}
	tmp ? ft_strdel(&tmp) : (0);
	return (str);
}

char	*ft_setlloc(char *str, char *tmp, t_arg mod)
{
	int		size;

	size = mod.width - ft_strilen(str);
	tmp = ft_memalloc(size + 1);
	tmp = ft_memset(tmp, ' ', size);
	str = ft_strjoin(tmp, str);
	ft_strdel(&tmp);
	return (str);
}

char	*handle_width_flag_zero(char *tmp, char *str, t_arg mod)
{
	if (mod.width > ft_strilen(str) && !mod.precision && g_nb >= 0)
	{
		tmp = ft_memalloc(mod.width - ft_strilen(str) + 1);
		tmp = ft_memset(tmp, '0', mod.width - ft_strilen(str));
		str = ft_strjoin(tmp, str);
		(mod.flag_hash) ? (str[1] = mod.hex ? 'X' : 'x') : (0);
	}
	else if (mod.width > ft_strilen(str) && !mod.precision && g_nb < 0)
	{
		tmp = ft_memalloc(mod.width - ft_strilen(str) + 1);
		tmp = ft_memset(tmp, '0', mod.width - ft_strilen(str) - 1);
		str = ft_strjoin(tmp, str);
		(!mod.precision) ? str = ft_strjoin("-", str) : (0);
	}
	else if (mod.width > ft_strilen(str) && mod.width && mod.precision)
		str = ft_setlloc(str, tmp, mod);
	tmp ? ft_strdel(&tmp) : (0);
	return (str);
}

char	*handle_int_width(char *str, t_arg mod)
{
	char	*tmp;

	tmp = NULL;
	if (mod.flag_minus)
		str = handle_width_flag_minus(str, mod);
	else if (mod.flag_zero && !mod.flag_minus)
		str = handle_width_flag_zero(tmp, str, mod);
	else if (mod.width > ft_strilen(str) && g_nb < 0)
		str = handle_negative_num(str, mod);
	else if (mod.width > ft_strilen(str) && g_nb >= 0)
	{
		(mod.flag_plus) ? str = ft_strjoin("+", str) : (0);
		str = ft_setlloc(str, tmp, mod);
		ft_strdel(&tmp);
	}
	else if (mod.width <= ft_strilen(str) && g_nb < 0 && !mod.flag_minus)
		(!mod.precision && g_nb < 0) ? str = ft_strjoin("-", str) : (0);
	return (str);
}
