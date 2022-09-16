/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coalition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:08:15 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/16 00:27:41 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coalition.h"

void	choose_color(char *user)
{
	FILE *file;
	char buffer[10];
	(void)user;
	
	file = fopen("user.txt", "r");
	if (file == NULL)
		printf("user.txt not found\n");
	while (fgets(buffer, sizeof(buffer), file))
	{
		printf("%s", buffer);
	}
}

int main (int ac, char **av)
{
	if (ac != 2)
		printf("Error!\n");
	else
		choose_color(av[1]);
}
