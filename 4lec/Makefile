CXX=g++
CVER = --std=c++11
DEPENDENCIES = classdesign.o person.o F1.o F2.o

classdesign: $(DEPENDENCIES)
	$(CXX) $(CVER) $^ -o $@ 
	./classdesign
	rm -r classdesign *.o

lec: lec.o
	$(CXX) $(CVER) $^ -o $@ 
	./lec
	rm -r lec *.o

clean:
	rm -r classdesign lec *.o