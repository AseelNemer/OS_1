gcc = CC

.PHONY: all
all: task1 task2 task3 lib

task1: helloAriel_1.c helloAriel_1.h main1_1.c
	$(CC) -o hello1 helloAriel_1.c main1_1.c

task2: helloAriel_1.h main1_2.c lib 
	$(CC) main1_1.c -L. -l Hello -o hello2

task3: helloAriel_1.h main1_3.c lib 
	$(CC) main1_3.c -fPIC -ldl -o hello3

lib: helloAriel_1.h helloAriel_1.c
	$(CC) -shared helloAriel_1.c -fPIC -o libHello.so



.PHONY : clean 
clean:
	rm -f .o hello1 hello2 hello3  *.o myApp lib*
