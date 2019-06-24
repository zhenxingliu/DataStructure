include ../Makefile.header

SOURCES = LinearStack.c LinearStack1.c LinearStack2.c Dec2Oct.c LinearStackClient.c
OBJS = $(SOURCES:.c=.o)
EXECUTABLE1 = Dec2Oct
EXECUTABLE2 = LinearStackClient


.PHONY=all clean

all: $(SOURCES) $(EXECUTABLE1) $(EXECUTABLE2)

$(EXECUTABLE1):$(OBJS)
	$(CC) LinearStack2.o Dec2Oct.o -o $@

$(EXECUTABLE2):$(OBJS)
	$(CC) LinearStack.o LinearStackClient.o -o $@

clean:
	- rm -f $(OBJS) $(EXECUTABLE1) $(EXECUTABLE2)


