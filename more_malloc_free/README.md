# C - Project 3 - More malloc free

## Description

Ce projet approfondit la gestion dynamique de la mémoire en langage C.

Il met l’accent sur l’utilisation des fonctions `malloc`, `free`, ainsi que sur la manière de manipuler les pointeurs pour allouer, gérer et libérer la mémoire manuellement.

L’objectif est de renforcer la compréhension des erreurs courantes liées à la mémoire et de développer des fonctions robustes et sûres.

## Contenu du projet

Les fichiers du projet incluent :

- `0-malloc_checked.c` : alloue de la mémoire en utilisant `malloc` et termine le programme avec le code d’erreur `98` si l’allocation échoue.
- `1-string_nconcat.c` : concatène deux chaînes ; la deuxième n’est copiée que sur `n` octets, et renvoie un pointeur vers une nouvelle chaîne allouée dynamiquement.
- `2-calloc.c` : implémente une version personnalisée de `_calloc`, qui alloue et initialise un tableau à zéro.
- `3-array_range.c` : crée un tableau d'entiers contenant toutes les valeurs entre `min` et `max` inclus.

## Compilation

Toutes les fonctions doivent être compilées avec :

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <file.c> -o <output>
```
