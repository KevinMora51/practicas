ejecutar : bin/programa	
	./bin/programa
bin/programa : src/main.cpp
	g++ src/main.cpp -o bin/programa -I include

bin/memoria : src/memoria.cpp
	g++ src/memoria.cpp -o bin/memoria

memoria : bin/memoria
	./bin/memoria

bin/archivo : src/archivo.cpp 
	g++ src/archivo.cpp -o bin/archivo

archivo : bin/archivo 
	./bin/archivo