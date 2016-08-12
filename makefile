Point:	mipuntito.o mimensito.o
		g++ mipuntito.o mimensito.o -o point
mimensito.o:	main.cpp TrianguloPascal.h
		g++ -c main.cpp -o mimensito.o
mipuntito.o:	TrianguloPascal.cpp TrianguloPascal.h
		g++ -c TrianguloPascal.cpp -o mipuntito.o