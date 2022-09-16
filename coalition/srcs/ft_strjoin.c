/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:57:35 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/16 00:21:32 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coalition.h"

char	*ft_strjoin(char *s1, char const *s2, int f)
{
	char	*tmp;
	int		is;
	int		id;

	is = 0;
	id = 0;
	if (!s1 || !s2)
		return (NULL);
	tmp = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (tmp == NULL)
		return (NULL);
	while (s1 && s1[is])
	{
		tmp[is] = s1[is];
		is++;
	}
	while (s2 && s2[id])
		tmp[is++] = s2[id++];
	tmp[is] = '\0';
	if (f == 1)
		free(s1);
	return (tmp);
}
