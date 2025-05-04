/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:12:38 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/04 22:18:58 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
t_stack *stacklast(t_stack *stack)
{
    while (stack->next != NULL)
        stack = stack->next;
    return (stack);
}
// Agrega un nodo al final de una pila
// void add_back(t_stack **stack, t_stack *new)
// {
//     if(!*stack) // Si la pila esta vacia
//     {
//         *stack = new; // El nuevo nodo es el primero
//     }
//     else
//     {
//      t_stack *tmp = *stack;
//     }
// }
int main() {

    t_stack *primeraPila = NULL;
    t_stack *segundaPila = NULL;
  
    t_stack *nodoA = create_node(55);
    t_stack *nodoB = create_node(125);
    t_stack *nodoC = create_node(675);
  
    nodoA->next = nodoB;
    nodoB->next = nodoC;
    primeraPila = nodoA;
  
    t_stack *nodoD = create_node(775);
    t_stack *nodoE = create_node(885);
  
    nodoD->next = nodoE;
    segundaPila = nodoD;
  
    printf("Primera pila\n");
    print_stack(primeraPila);
    printf("Segunda pila\n");
    print_stack(segundaPila);
  
    printf("Hago PushA\n");
    rr(&primeraPila, &segundaPila);
    printf("Primera pila\n");
    print_stack(primeraPila);
    printf("Segunda pila\n");
    print_stack(segundaPila);
  
    return (0);
  }