all: main

main: main.cpp
	c++ main.cpp -o main `sdl-config --cflags --libs` -framework OpenGL

clean:
	rm main
