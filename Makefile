all: install clean

install:
	cp src/*.cpp .
	cp inc/*.h .
	clang -std=c++11 -Wall -Werror -Wextra -Wpedantic -lncurses -o pong *.cpp


uninstall:
	rm -rf pong

clean:
	rm -rf *.cpp
	rm -rf *.h
	rm -rf *.o

reinstall: uninstall install clean