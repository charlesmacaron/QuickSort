qsort : partition.o qsmain.o qsutils.o quicksort.o
	g++ -o qsort partition.o qsmain.o qsutils.o quicksort.o

partition.o : partition.cpp quicksort.h
	g++ -c partition.cpp

qsmain.o : qsmain.cpp quicksort.h
	g++ -c qsmain.cpp

qsutils.o : qsutils.cpp quicksort.h
	g++ -c qsutils.cpp

quicksort.o : quicksort.cpp quicksort.h
	g++ -c quicksort.cpp

clean :
	> make.o
	> make~
	rm *.o *~

cleanall :
	> make.o
	> make~
	rm *.o *~ qsort
