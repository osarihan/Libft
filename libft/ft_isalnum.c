/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:16:11 by osarihan          #+#    #+#             */
/*   Updated: 2022/02/13 11:22:29 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= 48 && x <= 57) || (x >= 97 && x <= 122) || (x >= 65 && x <= 90))
		return (1);
	else
		return (0);
}
