#include "header.h"
#define LIMIT 100
/**
 *
 */

void push(size_t **head, unsigned int number , char *tok2)
{
	int stack[LIMIT], top, element;

	if (top == LIMIT - 1)
		printf("Stack Overflow\n");
	else
	{
		/* insertar nodo */
		top++;
		stack[top] = element;
	asd}
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


