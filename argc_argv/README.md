# C - argc, argv

## Description

Ce projet fait partie du programme Holberton.
Il a pour but de nous apprendre à utiliser les **arguments de la ligne de commande** en C, à travers les variables `argc` et `argv`.

## Objectifs d'apprentissage

À la fin de ce projet, je devrais être capable d'expliquer, sans aide :

- Ce que signifient les paramètres `argc` et `argv` dans le `main`
- Comment utiliser les arguments passés à un programme
- Comment convertir une chaîne en entier avec `atoi`
- Comment gérer le nombre d’arguments reçus
- Comment afficher tous les arguments d’un programme

## Contenu du projet

Chaque fichier traite un aspect différent des arguments de la ligne de commande :

- `0-whatsmyname.c` : Affiche le nom du programme
- `1-args.c` : Affiche le nombre d’arguments passés au programme
- `2-args.c` : Affiche tous les arguments reçus
- `3-mul.c` : Multiplie deux nombres passés en arguments
- `4-add.c` : Additionne tous les nombres passés en arguments

## Compilation

Toutes les fonctions doivent être compilées avec :

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <file.c> -o <output>
```
