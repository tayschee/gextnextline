/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:56:15 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/20 11:57:27 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../getnextline/get_next_line_bonus.h"
#include <libc.h>

int main()
{
	char	*fichier[15] = {"file/empty", "file/long", "file/short", "file/longspace", "file/shortspace", "file/1", "file/2", "file/3", "file/empty", "file/endn", "file/medium", "file/multiend", "file/inexist", "file/n", NULL};
	int file;
	//int file1;
	//int file2;
	int i;
	int j;
	int t;
//	int k;
//	int l;
	char *line;
	//char *txt;
	//char *tst;

	i = 1;
	j = 0;
	t = 0;
	
	//file1 = open("test2", O_RDONLY);
	//file2 = open("test3", O_RDONLY);
	while (fichier[t])
	{
		file = open(fichier[t], O_RDONLY);
		printf("file int : %d\n", file);
		printf("fichier[%d] : %s\n", t, fichier[t]);
		while ((i = get_next_line(file, &line)) > 0)
		{
			//printf("file int : %d\n", file);
			j++;
			//printf("i = %d\n", i);
			//if (j == 2)
			//	close(file);
 			printf(" %s : RESULTAT FIN DE BOUCLE [%d] : |%s|\n", fichier[t], i, line);
			printf(" %s : POUR LE BACKSLASH N  [%d] : |%c|\n", fichier[t], i, *line);			
			//printf(" test1 : RESULTAT FIN DE BOUCLE [%d] : |%s|\n", k, txt);
			//printf(" test2 : RESULTAT FIN DE BOUCLE [%d] : |%s|\n", l, tst);
			
			free(line);
			//if (j == 2)
			//	while (1);
			//free(txt);
			//free(tst);
		}
		//printf("get_next_line  0 == |%i|: |%s|\n", i, line);
		printf("getnextline bs0 : |%c|\n", *line);
		if (t != 12 && t != 13)
			free(line);
		//get_next_line(file, &line);
		//printf("2 get_next_line 0 == |%i|: |%s|\n", i, line);
		//free(line);
		t++;
		//close(file);
	}
/*	i = 1;
	j = 1;
	k = 1;
	file = open(fichier[5], O_RDONLY);
	file1 = open(fichier[6], O_RDONLY);
	file2 = open(fichier[7], O_RDONLY);
	while (i > 0 || j > 0|| k > 0)
	{
		i = get_next_line(file, &line);
		printf(" %s : RESULTAT FIN DE BOUCLE [%d] : |%s|\n", fichier[5], i, line);
		free(line);
		j = get_next_line(file1, &line); 
		printf(" %s : RESULTAT FIN DE BOUCLE [%d] : |%s|\n", fichier[6], i, line);
		free(line);
		k = get_next_line(file2, &line);  
		printf(" %s : RESULTAT FIN DE BOUCLE [%d] : |%s|\n", fichier[7], i, line);
		free(line);
	}*/
	while(get_next_line(13, &line) > 0)
		printf(" invalid file descriptor : RESULTAT FIN DE BOUCLE [%d] : |%s|\n", i, line);
//	while(get_next_line(0, &line))
//		printf(" STDIN : RESULTAT FIN DE BOUCLE [%d] : |%s|\n", i, line);
	//close(file);
	//printf("file : %d\n", file);
	//i = get_next_line(file, &line);
	//printf("get_next_line |%i|: |%s|\n", i, line);
	//free(line);
	//while (1);
	return (0);
}
