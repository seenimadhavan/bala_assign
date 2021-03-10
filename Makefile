IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=../obj

LIBS=-lm

_DEPS = header.h samhead.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = init.o module.o event_manager.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

lastbin: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

