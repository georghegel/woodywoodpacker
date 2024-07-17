TARGET	=	woody_woodpacker
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -O2

SRC			= ./srcs/decrypter.c			\
					./srcs/encrypter.c			\
					./srcs/main.c						\
					./srcs/packer.c					\
					./srcs/parser.c					\
					./srcs/rebuilder.c			\
					./srcs/stub.c						\
					#./srcs/headers/woody.h

OBJ		= $(patsubst %.c,%.o,$(SRC))


.PHONY: all clean

all: $(TARGET)
	
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ) $(TARGET)

