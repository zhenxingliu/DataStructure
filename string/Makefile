include ../Makefile.header

OBJS = CustomString.o

.PHONY = all clean
all:$(OBJS)

.c.o:
	@$(CC) -c -o $@ $<

clean:
	- rm -f $(OBJS)