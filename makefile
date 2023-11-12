bin/testMochila: testMochila.cpp mochila.cpp
	mkdir -p bin
	g++ -o bin/testMochila testMochila.cpp mochila.cpp


bin/test_DyV : test_DyV.cpp DyV.h
	mkdir -p bin
	g++ -o bin/test_DyV test_DyV.cpp DyV.h

clean:
	rm -r *.o *.gch bin
