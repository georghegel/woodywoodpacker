#include "./headers/woody.h"

int parser(FILE *file, Elf86_64_header *header) {

  if (!file) {
    perror("fopen");
    return EXIT_FAILURE;
  }

  if (fread(header, 1, sizeof(header), file) != sizeof(header)) {
    perror("fread");
    fclose(file);
    return EXIT_FAILURE;
  }

  fclose(file);
  
  if (header->e_ident[EI_MAG0] != ELFMAG0 ||
      header->e_ident[EI_MAG1] != ELFMAG1 ||
      header->e_ident[EI_MAG2] != ELFMAG2 ||
      header->e_ident[EI_MAG3] != ELFMAG3) {
    fprintf(stderr, "Not an ELF file\n");
    return EXIT_FAILURE;
  }

  if (header->e_ident[EI_CLASS] != ELFCLASS64) {
    fprintf(stderr, "Not an 64 file\n");
    return EXIT_FAILURE;
  }

  if (header->e_machine != EM_X86_64) {
    fprintf(stderr, "Not an x86_64 file\n");
    return EXIT_FAILURE;
  }
  return 0;
}
