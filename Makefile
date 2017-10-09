
all: hello
	docker build -t hello -f minimal.docker .
	docker run hello

hello: hello.c
	gcc -o hello hello.c

.PHONY: clean
