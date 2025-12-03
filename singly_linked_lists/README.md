# C - Singly linked lists

---

## Description

Ce projet introduit les listes simplement chaînées en langage C.
L’objectif est de comprendre ce qu’est une liste chaînée, comment elle est structurée, comment parcourir ses éléments et comment en ajouter ou supprimer correctement.

Vous allez manipuler une structure de liste définie dans `lists.h`, ainsi qu’une série de fonctions permettant d’opérer sur une liste de type `list_t`.

## Concepts abordés

- Différence entre tableaux et listes chaînées
- Définition et usage d’une structure en C (struct)
- Manipulation de pointeurs
- Allocation dynamique de mémoire
- Parcours d’une liste avec un pointeur
- Création, insertion et libération d’une liste chaînée

## Structure du projet

```bash
.
├── 0-print_list.c
├── 1-list_len.c
├── 2-add_node.c
├── 3-add_node_end.c
├── 4-free_list.c
├── lists.h
├── README.md
└── *-main.c (fichiers de test non fournis)
```

## Prototype des fonctions

`size_t print_list(const list_t *h);`
Affiche tous les éléments d’une liste chaînée.
Retourne le nombre de nœuds.

`size_t list_len(const list_t *h);`
Retourne le nombre d’éléments dans la liste.

`list_t *add_node(list_t **head, const char *str);`
Ajoute un nouveau nœud au début de la liste.

`list_t *add_node_end(list_t **head, const char *str);`
Ajoute un nouveau nœud à la fin de la liste.

`void free_list(list_t *head);`
Libère toute la liste.

## Structure du nœud (`list_t`)

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

## Compilation

Utilisez les flags exigés par Holberton :

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c
```
