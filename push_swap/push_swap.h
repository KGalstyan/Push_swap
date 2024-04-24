/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:34:53 by kgalstya          #+#    #+#             */
/*   Updated: 2024/04/24 20:51:42 by kgalstya         ###   ########.fr       */
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

//#define stack_a
//#define stack_b

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
//void	 ft_putstr(char *s);
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
int int_string_len(char *str);

//list libft functions//
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int value);
int	ft_lstsize(t_stack *lst);

//fill stack//
t_stack *fill_stack_values(char **av);
t_stack *fill_stack(int *num, int len);

//sorting//

void sort(t_stack *stack_a, t_stack *stack_b);
void sorting_two(t_stack *stack_a, t_stack *stack_b);
void sorting_three(t_stack *stack_a);

#endif
