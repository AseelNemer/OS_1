

gcc = CC

.PHONY: all
all: task2 lib

task2: helloAriel_1.h main1_2.c lib 
	$(CC) main1_1.c -L. -l Hello -o hello2

lib: helloAriel_1.h helloAriel_1.c
	$(CC) -shared helloAriel_1.c -fPIC -o libHello.so


.PHONY : clean 
clean:
	rm -f .o hello1 hello2   *.o myApp lib*
