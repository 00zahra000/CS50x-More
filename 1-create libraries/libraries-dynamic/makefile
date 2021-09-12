program: program.o total.o
	gcc -o program program.o -L. -lsum
program.o: program.c total.h
	gcc -c program.c -o program.o
total.o: total.c total.h
	gcc -c total.c -o total.o
	ar rc libsum.a total.o


# program:
# 	gcc -c total.c -o total.o
# 	ar rc libsum.a total.o
# 	gcc -c program.c -o program.o
# 	gcc -o program program.o -L. -lsum
