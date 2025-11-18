# C - Project 1 - Function pointers

## Description

Ce projet introduit l’utilisation des pointeurs de fonctions en langage C.

L’objectif est de comprendre comment pointer vers une fonction, passer une fonction en paramètre et utiliser ces pointeurs pour créer des programmes plus modulaires et flexibles.

Ces concepts sont essentiels pour écrire du code générique, implémenter des callbacks, et mieux comprendre la manière dont C gère les fonctions en mémoire.

## Contenu du projet

Le projet contient plusieurs fonctions qui utilisent ou manipulent des pointeurs de fonctions :

`function_pointers.h` : fichier d’en-tête contenant les prototypes et définitions nécessaires.
`0-print_name.c` : applique une fonction à une chaîne de caractères pour afficher un nom de manière personnalisée.
`1-array_iterator.c` : exécute une fonction sur chaque élément d’un tableau d’entiers.
`2-int_index.c` : recherche un entier dans un tableau en utilisant une fonction de comparaison.
`3-calc.h`, `3-op_functions.c`, `3-get_op_func.c`, `3-main.c` : implémentation d’une mini-calculatrice utilisant un pointeur vers la fonction correspondant à l’opération demandée.

## Compilation

Toutes les fonctions doivent être compilées avec :

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <file.c> -o <output>
```

## Notes

- Le projet doit respecter les normes de style Holberton.
- Les pointeurs de fonctions permettent une grande flexibilité : ils sont très utilisés en callbacks, bibliothèques système, tri personnalisé, etc.
- Aucune fonction interdite ne doit être utilisée.
