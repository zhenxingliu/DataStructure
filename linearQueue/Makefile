include ../Makefile.header

OBJS = OrderQueue.o

.PHONY = all clean
all:$(OBJS)

OrderQueue.o:OrderQueue.h OrderQueue.c
	$(CC) -c OrderQueue.c -o OrderQueue.o 

clean:
	- rm -f $(OBJS)