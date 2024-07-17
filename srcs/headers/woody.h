#ifndef WOODY_WOODPACKER_H
#define WOODY_WOODPACKER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <zlib.h>
#include <stdint.h>
#include <string.h>


#define EI_MAG0 0
#define EI_MAG1 1
#define EI_MAG2 2
#define EI_MAG3 3
#define EI_CLASS 4
#define EI_DATA 5
#define EI_VERSION 6
#define EI_OSABI 7
#define EI_ABIVERSION 8
#define EI_PAD 9
// #define EI_NIDENT 16


#define ELFMAG0 0x7f
#define ELFMAG1 'E'
#define ELFMAG2 'L'
#define ELFMAG3 'F'
#define ELFCLASS 2
#define EM_X86_64 62

typedef struct {
  unsigned char e_ident[EI_PAD];
  uint16_t e_type;
  uint16_t e_machine;
  uint16_t e_version;
  uint16_t e_entry;
  uint16_t e_phoff;
  uint16_t e_shoff;
  uint16_t e_flags;
  uint16_t e_ehsize;
  uint16_t e_phentsize;
  uint16_t e_phnum;
  uint16_t e_shentsize;
  uint16_t e_shnum;
  uint16_t e_shstrndx;
} Elf86_64_header;





#endif
