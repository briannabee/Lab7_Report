a.exe: shape.o rectangle.o circle.o test_shape.o
	g++ shape.o rectangle.o circle.o test_shape.o
shape.o: shape.h shape.cpp
	g++ -c -g shape.cpp
rectangle.o: shape.h rectangle.h rectangle.cpp
	g++ -c -g rectangle.cpp
circle.o: shape.h circle.h circle.cpp
	g++ -c -g circle.cpp
test_shape.o: shape.h rectangle.h circle.h test_shape.cpp
	g++ -c -g test_shape.cpp
clean:
	del *.o a.exe