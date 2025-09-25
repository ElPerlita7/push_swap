/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:12:38 by abferrer          #+#    #+#             */
/*   Updated: 2025/09/16 16:33:34 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

// Crea un nuevo nodo con un valor;
t_stack *create_node(int value)
{
    t_stack *node = malloc(sizeof(t_stack)); // Reserva memoria para un nodo
    if (!node) // Verifica si malloc fallo
        return (NULL); // Si falla devuelve null
    node->value = value; // Asigna el valor al nodo
    node->next = NULL; // Inicializa el puntero como Null
    return (node); // Devuelve el nodo creado
}

// Recorre todo el stack y imprime los valores del stack
void print_stack(t_stack *stack) 
{
    
    t_stack *aux = stack; // variable auxiliar donde guardo lo que hay en el stack

    while (aux != NULL) { // Si el stack es diferente a null
        ft_printf("%d\n", aux->value); // Imprimo su valor
        aux = aux->next; //Apunto al siguiente nodo
    }
}
t_stack *get_last_node(t_stack *stack)
{
    while (stack->next != NULL)
        stack = stack->next;
    return (stack);
}
void add_node_back(t_stack **stack, t_stack *new_node)
{
    t_stack *temp;
    
    if (!*stack)
    {
        *stack = new_node;
        return;
    }
    temp = *stack;
    while (temp->next)
        temp = temp->next;
    temp->next = new_node;
}

int stack_size(t_stack *stack)
{
    int size = 0;
    while (stack)
    {
        stack = stack->next;
        size++;
    }
    return size;
}

int is_sorted(t_stack *stack)
{
    if (!stack)
        return (1);

    while (stack->next)
    {
        if (stack->value > stack->next->value)
            return (0);
        stack = stack->next;
    }
    return (1);
}

void free_stack(t_stack *stack)
{
    t_stack *tmp;

    while (stack)
    {
        tmp = stack;
        stack = stack->next;
        free(tmp);
    }
}
