/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 01:35:20 by maghayev          #+#    #+#             */
/*   Updated: 2019/12/10 19:17:22 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c, t_bool is_short)
{
	if (is_short)
		return (c == '\t' || c == ' ' || c == '\n');
	return (c == '\v' || c == '\r' || c == '\f' || c == '\t' || c == ' ' ||
																	c == '\n');
}
