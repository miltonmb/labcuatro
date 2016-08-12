Point:	main.o triangulo.o
	g++ main.o triangulo.o -o ejecutable

main.o:	main.cpp TrianguloPascal.h
	g++ -c main.cpp main.o

triangulo.o:	TrianguloPascal.cpp TrianguloPascal.h
	g++ -c TrianguloPascal.cpp triangulo.o
