all: quicksort.c quicksort.h radixsort.c radixsort.h
	gcc -c -Wall sortlib.c
	gcc -c -Wall quicksort.c
	gcc -o quicksort quicksort.o sortlib.o
	gcc -c -Wall sortlib.c
	gcc -c -Wall radixsort.c
	gcc -o radixsort radixsort.o sortlib.o

quicksort: quicksort.c quicksort.h
	gcc -c -Wall sortlib.c
	gcc -c -Wall quicksort.c
	gcc -o quicksort quicksort.o sortlib.o

radixsort: radixsort.c radixsort.h
	gcc -c -Wall sortlib.c
	gcc -c -Wall radixsort.c
	gcc -o radixsort radixsort.o sortlib.o

clean:
	rm -rf *.o quicksort radixsort
