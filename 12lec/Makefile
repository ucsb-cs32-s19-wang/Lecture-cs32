CXX = g++
CVER = --std=c++11
DEPENDENCIES = main.cpp

main: ${DEPENDENCIES}
	${CXX} ${CVER} $^ -o $@
	./main
	rm main
	
clean:
	rm main