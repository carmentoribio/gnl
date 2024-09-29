/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:45:05 by ctoribio          #+#    #+#             */
/*   Updated: 2024/09/26 16:45:14 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*bucket = NULL;
	char		*line;

	buffer = malloc(sizeof(char *) * BUFFER_SIZE);
	if (!buffer)
		return (NULL);
	return (line);
}
