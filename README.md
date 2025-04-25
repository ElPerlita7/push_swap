# push_swap

🧠 Descripción del proyecto push_swap - 42
El proyecto push_swap es un ejercicio de algoritmia y optimización propuesto por la escuela 42. Su objetivo principal es ordenar una pila de números enteros utilizando un conjunto limitado de operaciones, de forma eficiente (es decir, con el menor número posible de movimientos).

🎯 Objetivo
Implementar un programa que genere una secuencia de instrucciones para ordenar números usando dos pilas (stack A y stack B), y un conjunto reducido de comandos específicos.

📚 Reglas básicas
Se te proporciona una lista de números enteros (no duplicados).

Debes ordenarlos en stack A en orden ascendente.

Puedes usar una segunda pila (stack B) como herramienta auxiliar.

Solo puedes usar un conjunto restringido de operaciones (push, swap, rotate, reverse rotate).

⚙️ Operaciones permitidas
sa, sb, ss: intercambiar los dos primeros elementos de A o B.

pa, pb: mover el primer elemento de una pila a la otra.

ra, rb, rr: rotar la pila (el primer elemento pasa al final).

rra, rrb, rrr: rotación inversa (el último pasa al principio).

🧩 Partes del proyecto
Checker: Un programa que verifica si una secuencia de instrucciones ordena correctamente la pila.

Push_swap: Tu programa principal, que calcula y genera la secuencia óptima de operaciones para ordenar la lista.

🧠 Qué se evalúa
Tu habilidad para pensar en algoritmos eficientes (quicksort, radix sort, etc.).

Optimización (mínimo número de operaciones).

Manejo de estructuras de datos (listas enlazadas o arrays para simular las pilas).

Código limpio, estructurado y conforme a las normas del estilo 42.
