#include "./headers/woody.h"

int main(int argc, char **argv) {

  if (argc != 2) {
    fprintf(stderr, "Usage: %s <ELF_FILENAME>\n", argv[0]);
    return EXIT_FAILURE; // return error
  }

  char *binary_name = malloc(
      sizeof(char) * strlen(argv[1])); // add additional security checkers?
  if (binary_name == NULL) {
    fprintf(stderr, "Couldn't allocate enough memory for the filename\n");
    return EXIT_FAILURE;
  }
  strcpy(binary_name, argv[1]);
  FILE *file = fopen(binary_name, "rb");

  Elf86_64_header *header = malloc(sizeof(Elf86_64_header));

  if (header == NULL) {
    fprintf(stderr, "Couldn't allocate enough memory for the ELF header\n");
    return EXIT_FAILURE;
  }

  parser(file, header);

  // compression
  // encryption
  // stub

  free(binary_name);
  free(header);

  return 0;
}
