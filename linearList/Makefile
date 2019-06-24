include ../Makefile.header


OBJS = LinearList.o LinkedList.o LinearListALG.o

.PYTHON=all clean

all: $(OBJS)

LinearList.o:LinearList.c LinearList.h
	$(CC) -c LinearList.c -o LinearList.o

LinkedList.o:LinkedList.c LinkedList.h
	$(CC) -c LinkedList.c -o LinkedList.o

LinearListALG.o:LinearListALG.c
	$(CC) -c LinearListALG.c -o LinearListALG.o


clean:
	- rm -f $(OBJS)
