# C - Recursion

## Description

Ce projet fait partie du programme Holberton.
Il a pour but de nous apprendre à utiliser la **récursion** en C — une technique où une fonction s'appelle elle-même pour résoudre un problème.

## Objectifs d'apprentissage

À la fin de ce projet, je devrais être capable d'expliquer, sans aide :

- Qu'est-ce qu'une récursion, et comment ça fonctionne
- La différence entre récursion et boucle
- Les avantages et inconvénients de la récursion
- Identifier les cas de base pour éviter les boucles infinies
- Écrire des fonctions récursives simples en C

## Contenu du projet

Chaque fichier contient une fonction récursive spécifique :

- `0-puts_recursion.c` : imprime une chaîne, suivie d’un saut de ligne
- `1-print_rev_recursion.c` : imprime une chaîne à l’envers
- `2-strlen_recursion.c` : retourne la longueur d’une chaîne
- `3-factorial.c` : calcule la factorielle d’un nombre
- `4-pow_recursion.c` : calcule x à la puissance y
- `5-sqrt_recursion.c` : calcule la racine carrée naturelle d’un nombre
- `6-is_prime_number.c` : teste si un nombre est premier
- `100-is_palindrome.c` _(avancé)_ : vérifie si une chaîne est un palindrome
- `101-wildcmp.c` _(avancé)_ : compare deux chaînes avec le caractère spécial `*`

## Compilation

Toutes les fonctions doivent être compilées avec :

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <file.c> -o <output>
```
