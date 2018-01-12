/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:15:29 by ztisnes           #+#    #+#             */
/*   Updated: 2018/01/11 17:29:39 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_node
{
	void			*data;
	struct s_node	*next;
}					t_node;

typedef struct		s_queue
{
	t_node			*first;
	t_node			*last;
}					t_queue;
