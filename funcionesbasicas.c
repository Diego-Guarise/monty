#include "header.h"
#define LIMIT 100
/**
 *
 */

void push(stack_t **stack, unsigned int number)
{
	  stack_t *node;
	  if(!stack)
	  node = malloc(sizeof(stack_t));
	  if (!node)
	    {
	      free(node);
	      exit(EXIT_FAILURE);
	    }
	  node->n = number;
	  node->next = *stack;
	  node->prev = NULL;
	  *stack = node;
}

/**
 *
 */
void pall(stack_t **stack, unsigned int number)
{
  stack_t *iter = *stack;
  while (iter)
    {
      printf("%d\n", iter->n);
	iter = iter->next;
    }
}
