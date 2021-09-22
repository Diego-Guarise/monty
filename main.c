#include "header.h"
/**
 *
 */

int main(int argc, char* argv[])
{
  char* line, tok1, tok2;
  FILE *fp;
  size_t len = 0;
  ssize_t read;

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
    tok1 = strtok(line, " \t\n");
    tok2 = strtok(NULL, " \t\n");

  }

  fclose(fp);
exit(EXIT_SUCCESS);
}
