CXX=g++
CVER = --std=c++11

test: lec
	./lec

lec: lec.o
	$(CXX) $(CVER) $^ -o $@

clean:
	rm lec *.o