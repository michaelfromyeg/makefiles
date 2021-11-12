IDIR = ./include
ODIR = obj
LDIR = ./lib

CC = gcc
CFLAGS = -I $(IDIR) -std=gnu11 -Wall

LIBS = -lm

_DEPS = defs.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ = main.o helper.o
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean: # core is for core dumps!
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~
