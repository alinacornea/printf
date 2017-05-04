/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcornea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:53:53 by alcornea          #+#    #+#             */
/*   Updated: 2017/01/14 16:34:12 by alcornea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
