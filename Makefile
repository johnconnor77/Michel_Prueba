#
# Makefile for shell.c
#

all: shell

shell: shell.c
	gcc -Wall -g shell.c -o shell

clean:
	rm -f shell

dist:
	tar -cvzf dist8.tgz Makefile shell.c

