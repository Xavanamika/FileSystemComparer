all:
	gcc main.c -o fscm -s

debug:
	gcc main.c -o fscm -g
	./1