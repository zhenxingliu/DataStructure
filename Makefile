include Makefile.header

.PHONY=clean all linearList/linearList.o linearStack/linearStack.o linearQueue/linearQueue.o string/CustomString.o

all:linearList/linearList.o linearStack/linearStack.o linearQueue/linearQueue.o string/CustomString.o

linearList/linearList.o:
	@make -C linearList

linearStack/linearStack.o:
	@make -C linearStack

linearQueue/linearQueue.o:
	@make -C linearQueue

string/CustomString.o:
	@make -C string


clean:
	@make clean -C linearList
	@make clean -C linearStack
	@make clean -C linearQueue
	@make clean -C string