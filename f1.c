#include "header.h"
/**
 *
 */
void compare(stack_t **global_head, char *tok1, unsigned int number)
{
  int i = 0;

  instruction_t op[] = {
    {"push", push},
    {"pall", pall},
    {NULL, NULL}
  };
  while (op[i].opcode)
  {
    if (strcmp(tok1, op[i].opcode) == 0)
    {
      op[i].f(global_head, number);
      exit(EXIT_SUCCESS);
    }
    i++;
  }
  if (strlen(tok) != 0 && tok[0] != '#')
  {
    fprintf(stderr, "L%u: unknown instruction %s", number, tok1);
    exit(EXIT_FAILURE);
  }
}
