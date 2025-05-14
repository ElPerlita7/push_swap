/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 01:29:31 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/13 19:33:26 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Devuelve un único array de strings (char **tokens) donde cada string es un número, ya sin espacios ni agrupaciones.
char **parse_arg_split(char **argv)
{
    int i; // Se usa para recorrer argv (desde argv[1] en adelante)
    int j; // Se usa para recorrer el resultado de ft_split
    int k; // LLeva la cuenta total de cuantos tokens vas copiando en el array final
    char **tokens; // Es el array final que devuelvo
    char **tmp; // Variable temporal que va guardando el resultado de ft_split

    i = 1; // Empieza por 1 por que el 0 seria el nombre del programa("ft_push_swap")
    k = 0;
    tokens = malloc(sizeof(char *) * count_arg(argv) + 1); // Reservo Memoria para tokens, cuento cuantos numeros individuales hay despues de hacer split y le sumo +1 para añadir el NULL
    if (!tokens) // Si falla malloc devuelvo NULL
        return (NULL);
    while(argv[i]) // Recorro argv[1] hasta el final
    {
        j = 0; // Le doy el valor a 0 a j para que recorra desde 0 y siempre que entre al bucle empiece desde 0
        tmp = ft_split(argv[i], ' '); // Llamo a split para dividirlo en palabras separadas por espacios
        
        while (tmp[j])
        { 
            tokens[k++] = ft_strdup(tmp[j++]);
        }
        free(tmp);
        i++;
    }
    tokens[k] = NULL;
    return(tokens);
}
int arg_isnum(char *tokens)
{
char    **tokens;
int i;

i = 0;
    if (!tokens)
        return (NULL);
    if (tokens[i] == '+' || tokens[i] == '-')
        return (NULL);
}

int main(int argc, char **argv)
{
    int i;
    char **token;
    
    i = 0;
    (void)argc;
    token = parse_arg_split(argv);
    while (token[i])
    {
        ft_printf("%s\n", token[i]);
        i++;
    }
    return(0);
}


