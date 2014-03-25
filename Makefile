compile:
	g++ -Wall -o t3solver driver.cpp t3solver.cpp -o t3solver
clean:
	rm t3solver
run:
	./t3solver