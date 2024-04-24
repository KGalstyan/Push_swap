/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:34:53 by kgalstya          #+#    #+#             */
/*   Updated: 2024/04/24 16:54:31 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
    int index;
    int value;
    
    struct s_stack	*next;
}	t_stack;

#define stack_a
#define stack_b

//swap//
void do_sa(t_stack *stack_a);
void do_sb(t_stack *stack_b);
void do_ss(t_stack *stack_a, t_stack *stack_b);

//rotate//
void do_ra(t_stack *stack_a);
void do_rb(t_stack *stack_b);

//rev-rotate//

void do_rra(t_stack *stack_a);
void do_rrb(t_stack *stack_b);
void do_rrr(t_stack *stack_a, t_stack *stack_b);


//func//
t_stack  stack_last(t_stack *stack);
t_stack  stack_penultimate(t_stack *stack);
void	 ft_putstr(char *s, int fd);
t_stack new_stack(t_stack *stack);
void	free_stack(t_stack **stack);

//input checker//

//libft functions//
long long	ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);

//for free//
void free_matrix(char **split_str);

//argv checker//
int is_digit(char h);
int sign(char h);
int arg_checker(char **av);

//string checker//
char *make_char_str(char **av, int len);
int str_with_checker(char *str);

//int string and dublication checker//
int *make_int_string(char *str);
int correct_input(char **argv);

#endif
