gcc = CC

.PHONY: all

all:task2.1 task2.2 task2.3 task2.4

task2.1: main2_1.o
	$(CC) $^ -o forkExample

task2.2:main2_2.o
	$(CC) $^ -o cloneExample

task2.3: main2_3.o
	$(CC) $^ -o deamonExamlpe

task2.4: main2_4.o
	$(CC) $^ -o main2_4	


.PHONY: clean
clean:
	rm -f .o forkExample cloneExample deamonExamlpe main2_4 *.o