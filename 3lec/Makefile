CXX=g++
CVER = --std=c++11
DEPENDENCIES = classdesign.o person.o

test: lec
	./lec

classdesign: $(DEPENDENCIES)
	$(CXX) $(CVER) $^ -o $@ 
	./classdesign

lec: lec.o
	$(CXX) $(CVER) $^ -o $@ 

clean:
	rm classdesign lec *.o