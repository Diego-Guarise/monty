#include "header.h"
#define LIMIT 100
/**
 *
 */

void push(stack_t **stack, unsigned int number)
{
	  stack_t *node;
	  if(!stack)
	    return (0);
	  node = malloc(sizeof(stack_t));
	  if (!node)
	    {
	      free(node);
	      exit(EXIT_FAILURE);
	    }
	  node->n = 3;
	  node->next = *stack;
	  node->prev = NULL;
	  if (*stack)
	    {
	      (stack)->prev = node;
	    }
	  else
	    {
	      stack = node;
	    }
	  printf("asdasd");
}

/**
 *
 */
void pop(int num)
{
	int stack[LIMIT], top, element;
	
	if(top == -1)
		printf("Stack underflow\n");
	else
	{
		/* arreglar nodo anterior?*/
		element=stack[top];
		printf("The deleted item is %d\n",stack[top]);
		top--; // The element below the topmost element is deleted
	}
}


