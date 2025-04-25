/*
Concepto clave:

Tienes dos pilas:

Stack A → contiene los números a ordenar al inicio

Stack B → empieza vacía

Piensa en las pilas como si fueran listas donde solo puedes manipular el principio o el final.



Swap

sa : intercambia los dos primeros elementos de A

sb : intercambia los dos primeros elementos de B

ss : sa y sb a la vez

Push

pa : mueve el primer elemento de B a A

pb : mueve el primer elemento de A a B

Rotate

ra : rota A hacia arriba (el primer elemento pasa al final)

rb : rota B hacia arriba

rr : ra y rb a la vez

Reverse Rotate

rra : rota A hacia abajo (el último pasa al inicio)

rrb : rota B hacia abajo

rrr : rra y rrb a la vez

*/