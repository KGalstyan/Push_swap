/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:34:53 by kgalstya          #+#    #+#             */
/*   Updated: 2024/05/01 18:46:46 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "get_next_line.h"
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;

	struct s_stack	*next;
}					t_stack;

// swap//
void				do_sa(t_stack **stack_a, int flag);
void				do_sb(t_stack **stack_b, int flag);
void				do_ss(t_stack **stack_a, t_stack **stack_b, int flag);

// rotate//
void				do_ra(t_stack **stack_a, int flag);
void				do_rb(t_stack **stack_b, int flag);
void				do_rr(t_stack **stack_a, t_stack **stack_b, int flag);

// rev-rotate//

void				do_rra(t_stack **stack_a, int flag);
void				do_rrb(t_stack **stack_b, int flag);
void				do_rrr(t_stack **stack_a, t_stack **stack_b, int flag);

// push//
void				do_pa(t_stack **stack_a, t_stack **stack_b, int flag);
void				do_pb(t_stack **stack_a, t_stack **stack_b, int flag);

// utils//
t_stack				*stack_last(t_stack *stack);
t_stack				*stack_penultimate(t_stack *stack);
t_stack				new_stack(t_stack *stack);

// LIBFT functions//
long long			ft_atoi(const char *nptr);
char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, int start, int len);
void				ft_putstr(char *s);
char				*ft_strdup(const char *s);

// for free//
void				free_matrix(char **split_str);
void				free_stack(t_stack **stack);

// argv checker//
int					is_digit(char h);
int					sign(char h);
int					arg_checker(char **av);

// string checker//
char				*make_char_str(char **av, int len);
int					str_with_checker(char *str);

// int string and dublication checker//
int					*make_int_string(char *str);
int					correct_input(char **argv);
int					int_string_len(char *str);

// list libft functions//
void				ft_lstadd_back(t_stack **lst, t_stack *new);
void				ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack				*ft_lstnew(int value);
int					ft_lstsize(t_stack *lst);

// fill stack//
t_stack				*fill_stack_values(char **av);
t_stack				*fill_stack(int *num, int len);

// sorting//

void				sort(char **av, t_stack **stack_a, t_stack **stack_b);
void				sorting_two(t_stack **stack_a);
void				sorting_three(t_stack **stack_a);
void				sorting_four(t_stack **stack_a, t_stack **stack_b);
void				sorting_five(t_stack **stack_a, t_stack **stack_b);
void				sorting_main(char **av, t_stack **stack_a,
						t_stack **stack_b);

int					get_min_index(t_stack *stack_a);
int					is_sorted(t_stack **stack);

// sorting main//
void				push_back(t_stack **stack_a, t_stack **stack_b, int len);

// error//
void				exit_error(t_stack **stack_a, t_stack **stack_b);
int					ft_strcmp(const char *s1, const char *s2);

// bonus//

#endif
