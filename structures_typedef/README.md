# C - Project 3 - Structures, typedef

## Description

Ce projet introduit les structures et le mot-clé typedef en langage C.

L’objectif est de comprendre comment regrouper différentes données sous un seul type personnalisé et de manipuler des structures de manière efficace.

On y apprend également à gérer des pointeurs vers des structures et à organiser des informations complexes dans des programmes C.

## Contenu du projet

Les fichiers du projet incluent des fonctions qui manipulent des structures :

`dog.h`: fichier d’en-tête contenant la définition de la structure dog et les prototypes de fonctions associées.
`1-init_dog.c` : initialise une structure `dog` avec un nom, un âge et un propriétaire.
`2-print_dog.c` : affiche les informations d’un `dog` structuré.
`4-new_dog.c`: crée une nouvelle structure dog allouée dynamiquement.
`5-free_dog.c` : libère la mémoire allouée dynamiquement pour une structure `dog`.

## Compilation

Toutes les fonctions doivent être compilées avec :

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <file.c> -o <output>
```
