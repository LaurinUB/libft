/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:43:50 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/08 10:45:03 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include "../libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

char	*get_next_line(int fd);
char	*ft_strchr_gnl(char *s, int c);
char	*ft_strjoin_gnl(char *left_str, char *s);
#endif
