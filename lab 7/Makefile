all: clean buildMain buildTest runTest

buildMain:
	mkdir -p project
	g++ -o project/bookshop book.cpp menu.cpp lab7.cpp -lm

buildTest:
	g++ -ftest-coverage -fprofile-arcs -O0 -o project/tester -Dmain=_main book.cpp menu.cpp lab7.cpp lab7_test.cpp -lm
runTest:
	./project/tester < test.txt
	gcov -abcfu lab7.cpp
	gcov -abcfu menu.cpp
	gcov -abcfu book.cpp
	gcov -abcfu lab7_test.cpp
clean:
	rm -rf project
