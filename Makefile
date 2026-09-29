CC = g++
CFLAGS = -Wall -g
SRC_DIR = src
BIN_DIR = bin
TEST_DIR = test

all: app

app: $(SRC_DIR)/main.cpp $(SRC_DIR)/bib.cpp
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -I$(SRC_DIR) $^ -o $(BIN_DIR)/app.exe

test: $(TEST_DIR)/main.cpp $(SRC_DIR)/bib.cpp
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -I$(SRC_DIR) $^ -o $(BIN_DIR)/testeRegressivo.exe

clean:
	rm -rf $(BIN_DIR)/*