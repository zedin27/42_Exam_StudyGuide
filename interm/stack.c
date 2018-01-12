/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:15:16 by ztisnes           #+#    #+#             */
/*   Updated: 2018/01/11 20:52:18 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO: init(), push(), pop(), isEmpty(), peek()

typedef struct		s_node
{
	void			*data;
	struct s_node	*next;
}					t_node;

typedef struct		s_stack
{
	t_node			*top;
}					t_stack;

t_node				*init(void)
{
	t_stack			*newNode;

	newNode = (t_stack *)malloc(sizeof(t_stack));
	newNode->top = NULL;
	return (newNode);
}

void 				push(t_stack *stack, void *content)
{
	t_node			*newNode;

	newNode = (t_node *)malloc(sizeof(t_node));
	newNode->content = content;
	newNode->next = stack->top;
	stack->top = newNode;
}
