/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:12:38 by abferrer          #+#    #+#             */
/*   Updated: 2025/09/25 14:09:17 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Convierte la pila en array para poder ordenarla
int *stack_to_array(t_stack *a, int size)
{
    int *arr = malloc(sizeof(int) * size);
    int i = 0;
    if (!arr)
        return NULL;
    while (a)
    {
        arr[i++] = a->value;
        a = a->next;
    }
    return arr;
}

// Ordena el array con bubble sort (simple, suficiente para este paso)
void array_sort(int *arr, int size)
{
    int i, j, tmp;
    for (i = 0; i < size - 1; i++)
        for (j = i + 1; j < size; j++)
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

// Devuelve la posición de "value" dentro del array ordenado
int get_index(int value, int *sorted, int size)
{
    for (int i = 0; i < size; i++)
        if (sorted[i] == value)
            return i;
    return -1;
}

// Encuentra la posición del valor máximo dentro de una pila
int find_max_pos(t_stack *stack)
{
    int max = stack->value;
    int pos = 0;
    int max_pos = 0;
    t_stack *tmp = stack;

    while (tmp)
    {
        if (tmp->value > max)
        {
            max = tmp->value;
            max_pos = pos;
        }
        tmp = tmp->next;
        pos++;
    }
    return max_pos;
}

// LLeva el elemento en "pos" hasta la cima usando la menor cantidad de movimientos
void bring_to_top(t_stack **stack, int pos, char which)
{
    int size = stack_size(*stack);

    if (pos <= size / 2)
    {
        while (pos-- > 0)
            (which == 'a') ? ra(stack) : rb(stack);
    }
    else
    {
        int moves = size - pos;
        while (moves-- > 0)
            (which == 'a') ? rra(stack) : rrb(stack);
    }
}

void ksort(t_stack **a)
{
    t_stack *b = NULL;
    int size = stack_size(*a);
    if (size <= 5)
    {
        simple_sort(a);
        return;
    }

    // transformo stack a array
    int *numbers_arr = stack_to_array(*a, size);
    if (!numbers_arr)
        return;
    // ordeno el array
    array_sort(numbers_arr, size);

    // calcular el tamaño del chunk
    /*
    con un chuck size pequeño es mas probable este que el elemento del tope este en el rango
    con un chuck size grande: mayor probabilidad de rotar a varias veces (ra)
     */
    int chunk_count;
    if (size <= 100) {
        chunk_count = 5;
    }
    else {
        chunk_count = 11;
    }
    
    int chunk_size = size / chunk_count;
    if (chunk_size == 0)
        chunk_size = 1;

    int current_limit = chunk_size;
    int pushed = 0;

    // Paso 1: mover de A a B en chunks
    while (*a)
    {
        int index = get_index((*a)->value, numbers_arr, size);

        if (index < current_limit)
        {
            pb(a, &b);
            pushed++;
            if (index < current_limit - (chunk_size / 2))
                rb(&b);
            if (pushed == current_limit && current_limit < size)
                current_limit += chunk_size;
        }
        else
            ra(a);
    }

    // Paso 2: devolver de B a A en orden descendente
    while (b)
    {
        int max_pos = find_max_pos(b);
        bring_to_top(&b, max_pos, 'b');
        pa(a, &b);
    }

    free(numbers_arr);
}