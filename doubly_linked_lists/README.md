# C - Doubly linked lists

---

## Description

Ce projet introduit les listes doublement chaînées (doubly linked lists) en langage C.
Contrairement aux listes simplement chaînées, chaque nœud contient deux pointeurs :

- prev : vers le nœud précédent
- next : vers le nœud suivant

Cela permet une navigation dans les deux sens, ainsi qu’une insertion/suppression plus flexible.

Tu travailleras avec la structure dlistint_t définie dans lists.h et tu implémenteras plusieurs fonctions permettant de manipuler ces listes.

## Concepts abordés

- Différence entre singly et doubly linked lists
- Manipulation de pointeurs multiples
- Parcours dans les deux directions
- Ajout de nœuds en début, fin ou position donnée
- Suppression de nœuds
- Gestion rigoureuse de la mémoire (malloc / free)
- Complexité des opérations sur listes chaînées

## Structure du projet

```bash
.
├── lists.h
├── 0-print_dlistint.c
├── 1-dlistint_len.c
├── 2-add_dnodeint.c
├── 3-add_dnodeint_end.c
├── 4-free_dlistint.c
├── 5-get_dnodeint.c
├── 6-sum_dlistint.c
├── 7-insert_dnodeint.c
├── 8-delete_dnodeint.c
└── README.md
```

## Prototype des fonctions

`size_t print_dlistint(const dlistint_t *h);`
Affiche tous les éléments.

`size_t dlistint_len(const dlistint_t *h);`
Retourne le nombre d’éléments.

`dlistint_t *add_dnodeint(...)`
Ajoute en début.

`dlistint_t *add_dnodeint_end(...)`
Ajoute en fin.

`void free_dlistint(...)`
Libère la liste.

`dlistint_t *get_dnodeint_at_index(...)`
Accède à un nœud par index

`int sum_dlistint(...)`
Somme des valeurs

`dlistint_t *insert_dnodeint_at_index(...)`
Insère à un index donné

`int delete_dnodeint_at_index(...)`
Supprime à un index donné

## Structure de la liste

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
```

## Compilation

Utilisez les flags exigés par Holberton :

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c
```
