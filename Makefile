all:
	mkdir -p ./bin/release
	gcc ./source/main.c -o ./bin/release/fscm -s
	sudo cp ./bin/release/fscm /usr/local/bin

remove:
	sudo rm /usr/local/bin/fscm


debug:
	mkdir -p ./bin/debug
	gcc ./source/main.c -o ./bin/debug/fscm -g