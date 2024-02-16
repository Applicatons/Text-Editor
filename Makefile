
Run: Black.o
	g++ Black.o -o BlackWindow -lGL -lGLU -lglfw3 -lX11 -lXxf86vm -lXrandr -lpthread -lXi

main.o: Black.cpp
	g++ -std=c++11 -c Black.cpp

clean:
	rm Black.o BlackWindow