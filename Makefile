compile:
	gcc -Wall -o t3solver driver.cpp t3solver.h t3solver.cpp
clean:
	rm t3solver
run:
	./t3solver