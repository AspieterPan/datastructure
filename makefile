edit:main.o
	g++ main.cpp && ./a.out
	rm ./a.out

main.o:linearList.h

.PHONY:clean
clean:
	-rm main.o
