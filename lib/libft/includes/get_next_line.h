/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:19:07 by kchikwam          #+#    #+#             */
/*   Updated: 2024/12/20 17:19:11 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}				t_list;

int		ft_found_newline(t_list *list);
char	*ft_get_line(t_list *list);
t_list	*ft_find_last_node(t_list *list);
void	ft_copy_str(t_list *list, char *str);
int		ft_len_to_newline(t_list *list);
void	ft_polish_list(t_list **list);
void	ft_dealloc(t_list **list, t_list *clean_node, char *buf);
void	ft_create_list(t_list **list, int fd);

char	*get_next_line(int fd);

#endif
