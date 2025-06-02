TARGET = ./bin/release/fscm
CC = gcc

PREF_SRC = ./src/
PREF_OBJ = ./obj/

# All C files
SRC = $(wildcard $(PREF_SRC)*.c)
# Get SRC and rename to .o
OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC))

# Left - target result
# Right - required
$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)


# Common form without each target writing
# @ - left; < - right from :

$(PREF_OBJ)%.o : $(PREF_SRC)%.c
	$(CC) -c $< -o $@


# make clean
clean :  
	rm $(TARGET) $(PREF_OBJ)*.o

install :
	sudo rm /usr/local/bin/fscm
	sudo cp ./bin/release/fscm /usr/local/bin