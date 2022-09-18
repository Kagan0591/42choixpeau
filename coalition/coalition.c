/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coalition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:08:15 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/17 23:14:28 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
	FILE *fd;
	char buffer[100];
	
	if (ac == 2)
	{
		fd = fopen("user.txt", "r");
		if (fd == NULL) {
			printf("42Choixpeau: user.txt not found\n");
			exit(1);
		}
		while (fgets(buffer, 100, fd) != NULL) {
			if (strncmp(buffer, av[1], strlen(av[1])) == 0 && buffer[strlen(av[1])] == ' ') {
				printf("%s", buffer + strlen(av[1]) + 1);
				exit(0);
			}
		}
		printf("42Choixpeau: No match found: [%s]\n", av[1]);
	}
	else
		printf("42Choixpeau: Usage: <./a.out [name]>\n");
}
