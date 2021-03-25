all: buildMain buildTest runTest

buildMain: 
	gcc -o main main.c src.c  -std=c89 -lm

buildTest:
	gcc -o test test.c src.c -std=c89 -lm

runtest:
	./test