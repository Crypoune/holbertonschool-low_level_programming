#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
char *create_array(unsigned int size, char c)
{
  char *a;
  unsigned int i;
  a = (char *)malloc(sizeof(char) * size);
  if (a == NULL)
  {
    printf("Calm down !\n");
    return (NULL);
  }
  i = 0;
  while (i < size)
  {
    a[i] = c;
    i++;
  }
  return (a);
}
