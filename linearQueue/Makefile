include ../Makefile.header

OBJS = OrderQueue.o LinkedQueue.o

.PHONY = all clean
all:$(OBJS)

.c.o:
	@$(CC) -c -o $@ $<

clean:
	- rm -f $(OBJS)