#include "header.h"

/**
 *
 */

int main(int argc, char* argv[])
{
  char *line, *tok1, *tok2;
  FILE *fp;
  unsigned int i = 0;
  size_t len = 0;
  ssize_t read;
  stack_t *head = NULL, **global_head = &head;

  if (argc != 2)
  {
    fprintf(stderr, "USAGE: monty file\n");
    return (EXIT_FAILURE);
  }

  fp = fopen(argv[1], "r");

  if (!fp)
  {
    fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
    return (EXIT_FAILURE);
  }

  while ((read = getline(&line, &len, fp)) != -1)
  {
    tok1 = strtok(line, " ");
    tok2 = strtok(NULL, " \n\t");
    compare(global_head, tok1, i);
    i++;
   }

  fclose(fp);
exit(EXIT_SUCCESS);
}
