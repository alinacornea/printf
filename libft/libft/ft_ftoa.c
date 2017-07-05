/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcornea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 12:26:48 by alcornea          #+#    #+#             */
/*   Updated: 2017/04/20 12:26:49 by alcornea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*convert_long_long_to_ascii(long long num, int base)
{
	int					i;
	unsigned long long	sign;
	static char			buf[32] = "0";

	i = 30;
	if (num == 0)
		return (ft_strdup("0"));
	if (num < 0)
	{
		sign = -num;
		while (sign > 0 && i > 0)
		{
			buf[i--] = "0123456789abcdef"[sign % base];
			sign /= base;
		}
		buf[i] = '-';
		return (buf + i + 1);
	}
	while (num > 0 & i > 0)
	{
		buf[i] = "0123456789abcdef"[num % base];
		num /= base;
		i--;
	}
	return (buf + i + 1);
}

char	*ft_ftoa(double val, int precision)
{
	char		*str;
	char		*str2;
	int			len;
	intmax_t	int_part;
	intmax_t	frac_part;

	int_part = val;
	len = 0;
	val = val - int_part;
	while (len < precision)
	{
		val *= 10;
		len++;
	}
	frac_part = val * 0.1 * 10;
	if (frac_part < 0)
		frac_part = -1 * frac_part;
	str = ft_strjoin(convert_long_long_to_ascii(int_part, 10), ".");
	str2 = ft_strjoin(str, convert_long_long_to_ascii(frac_part, 10));
	if (frac_part == 0)
		str2 = ft_strjoin(str, "000000");
	return (str2);
}
