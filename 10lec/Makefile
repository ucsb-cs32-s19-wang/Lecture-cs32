DEPENDENCIES = student.cpp person.cpp lec.cpp

lec: ${DEPENDENCIES}
	g++ --std=c++11 $^ -o $@
	./lec

clean:
	rm lec *.o