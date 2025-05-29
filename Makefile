all:
	mkdir -p ./bin/release
	gcc ./source/main.c -o ./bin/release/fscm -s

debug:
	mkdir -p ./bin/debug
	gcc ./source/main.c -o ./bin/debug/fscm -g