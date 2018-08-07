momo:	main.o Calculator.o
	g++ -o momo main.o Calculator.o

main.o:	main.cc Calculator.cc
	g++ -c main.cc

Calculator.o: Calculator.cc Calculator.h
	g++ -c Calculator.cc
clean:
	rm -f *.o momo
