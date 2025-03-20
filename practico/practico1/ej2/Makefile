main: main.cpp punto.o segmento.o
	g++ -o exec/main main.cpp exec/Punto.o exec/Segmento.o

segmento.o: src/Segmento.cpp include/Segmento.h punto.o
	g++ -c -o exec/Segmento.o src/Segmento.cpp exec/Punto.o

punto.o: src/Punto.cpp include/Punto.h
	g++ -c -o exec/Punto.o src/Punto.cpp
