/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:30:15 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/16 00:21:20 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coalition.h"

char	*ft_strchr(const char *str, int nbr)
{
	int	i;
	int	len;

	if (!str)
		return (NULL);
	i = -1;
	len = ft_strlen(str);
	while (++i < len + 1)
		if (str[i] == (char)nbr)
			return ((char *)str + i);
	return (NULL);
}
