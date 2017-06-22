CC               = gcc
CFLAGS           = -Wall -Werror
TEST_FLAGS       = -I thirdparty -I src -Wall -Werror
EXECUTABLE       = bin/sqrt
BUILD_DIR        = build/src
SRC_DIR          = src
TEST_EXECUTABLE  = bin/tests
TEST_OBJ_DIR     = build/test


all: makedir compile test

makedir:
	mkdir -p bin build/src

compile: $(BUILD_DIR)/main.o $(BUILD_DIR)/koren`.o
	$(CC) $(BUILD_DIR)/main.o $(BUILD_DIR)/koren`.o -o $(EXECUTABLE) -lm

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/koren`.o: $(SRC_DIR)/koren`.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/koren`.c -o $(BUILD_DIR)/koren`.o -lm

test: mktest test-compile

mktest:
	mkdir -p bin build/test

test-compile: $(TEST_OBJ_DIR)/main.o $(TEST_OBJ_DIR)/koren`test.o $(TEST_OBJ_DIR)/validation_test.o $(BUILD_DIR)/koren`.o
	$(CC) $(TEST_OBJ_DIR)/main.o $(TEST_OBJ_DIR)/koren`test.o $(TEST_OBJ_DIR)/validation_test.o $(BUILD_DIR)/koren`.o -o $(TEST_EXECUTABLE) -lm

$(TEST_OBJ_DIR)/main.o: test/main.c
	$(CC) $(TEST_FLAGS) -c test/main.c -o $(TEST_OBJ_DIR)/main.o

$(TEST_OBJ_DIR)/koren`test.o: test/koren`test.c
	$(CC) $(TEST_FLAGS) -c test/koren`test.c -o $(TEST_OBJ_DIR)/koren`test.o -lm

$(TEST_OBJ_DIR)/validation_test.o: test/validation_test.c
	$(CC) $(TEST_FLAGS) -c test/validation_test.c -o $(TEST_OBJ_DIR)/validation_test.o

.PHONY : clean
clean:
	rm -rf build/ bin/