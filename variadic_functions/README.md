# C - Project 2 - Variadic functions

## Description

Ce projet introduit l’utilisation des fonctions variadiques en langage C.

L’objectif est de comprendre comment déclarer et utiliser des fonctions acceptant un nombre variable d’arguments grâce aux macros de la bibliothèque `<stdarg.h>` :

- `va_list`
- `va_start`
- `va_arg`
- `va_end`

Ces concepts sont couramment utilisés pour implémenter des fonctions génériques comme `printf`, mais aussi pour gérer des paramètres optionnels ou flexibles dans les programmes C.

## Contenu du projet

Le projet contient plusieurs fonctions qui exploitent des arguments variadiques :

- `variadic_functions.h` : fichier d’en-tête contenant les prototypes.
- `0-sum_them_all.c` : retourne la somme de tous ses paramètres.
- `1-print_numbers.c` : affiche une liste de nombres séparés par un séparateur.
- `2-print_strings.c` : affiche une liste de chaînes, tout en gérant les valeurs `NULL`.
- `3-print_all.c` : affiche différents types de données en fonction d’un format donné (`c`, `i`, `f`, `s`).

## Compilation

Toutes les fonctions doivent être compilées avec :

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <file.c> -o <output>
```

## Notes

- Le projet doit respecter les normes de style Holberton.
- Les fonctions variadiques sont essentielles pour construire des interfaces souples et génériques.
- Aucune fonction interdite ne doit être utilisée.
