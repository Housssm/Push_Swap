Push_swap est un projet algorithmique du cursus de l'école 42 par hoel-har
Le but est de trier une pile d'entiers avec un ensemble limité d'opérations, en produisant le moins de coups possible.
Pour cela, j'ai utilisé l'algorithme turque qui est capable de générer une séquence optimisée d'instructions pour trier les données à l'aide de deux piles (A et B).

Ce projet développe la capacité à concevoir des algorithmes efficaces, à optimiser des performances et à manipuler des structures de données de manière fine.
🧠 Règles du jeu

Je dispose de deux piles :

    A : pile de départ contenant les nombres à trier
    B : pile vide

Je dois trier la pile A uniquement en utilisant les opérations autorisées :
🔁 Opérations autorisées :

    sa / sb / ss : swap les deux premiers éléments de A / B / les deux
    pa / pb : push le sommet de B sur A / de A sur B
    ra / rb / rr : rotate A / B / les deux (déplace le premier élément à la fin)
    rra / rrb / rrr : reverse rotate A / B / les deux

🎯 Objectif

    Écrire un programme push_swap qui prend une liste d'entiers en argument et affiche la suite d'instructions pour trier la pile.
    L’objectif est de minimiser le nombre d’instructions.

🛠️ Compétences développées

    Implémentation d’algorithmes de tri optimisés
    Manipulation de listes chaînées
    Optimisation algorithmique et gestion de la complexité
    Validation d'entrée et gestion des erreurs

