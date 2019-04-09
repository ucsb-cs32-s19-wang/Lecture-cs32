CXX = clang++
CXXFLAG = --std=c++11
DEPENDENCIES = lec.o functions.o

# $@ - target
# $^ - dependencies of the make rule

all: lec.cpp functions.cpp functions.h
	$(CXX) $(CXXFLAG) lec.cpp functions.cpp -o lec
	./lec

lec: $(DEPENDENCIES)
	$(CXX) $(CXXFLAG) $^ -o $@
	./lec

clean:
	rm -r lec *.o 