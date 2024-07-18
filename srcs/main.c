#include "./headers/woody.h"

int main(int argc, char **argv) {

  if (argc != 2) {
    fprintf(stderr, "Usage: %s <ELF_FILENAME>\n", argv[0]);
    return EXIT_FAILURE; // return error
  }

  char *binary_name = malloc(
      sizeof(char) * strlen(argv[1])); // add additional security checkers?
  strcpy(binary_name, argv[1]);
  FILE *file = fopen(binary_name, "rb");

  Elf86_64_header *header = malloc(sizeof(Elf86_64_header));

  if (parser(file, header) == 0) {
    int a = 0;
    // next steps;
  }

  return 0;
}
