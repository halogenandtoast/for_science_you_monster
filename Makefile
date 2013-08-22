all: main

main: main.cpp
	c++     main.cpp   -o main

clean:
	rm main
