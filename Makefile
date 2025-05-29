all:
	mkdir -p ./bin/release
	gcc main.c -o ./bin/release/fscm -s

debug:
	mkdir -p ./bin/debug
	gcc main.c -o ./bin/debug/fscm -g