#include "header.h"
#define LIMIT 100
/**
 *
 */

void push(stack_t **stack, unsigned int number)
{
	  stack_t *node;

	  node = malloc(sizeof(node));
	  if (!node)
	    {
	      free(stack);
	      exit(EXIT_FAILURE);
	    }
	  node->next = *stack;
	  node->prev = NULL;
	  *stack = node;
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


