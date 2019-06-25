include Makefile.header

.PHONY=clean all linearList/linearList.o linearStack/linearStack.o linearQueue/linearQueue.o

all:linearList/linearList.o linearStack/linearStack.o linearQueue/linearQueue.o

linearList/linearList.o:
	@make -C linearList

linearStack/linearStack.o:
	@make -C linearStack

linearQueue/linearQueue.o:
	@make -C linearQueue



clean:
	@make clean -C linearList
	@make clean -C linearStack
	@make clean -C linearQueue