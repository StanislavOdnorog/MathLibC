### CONSTANTS ###
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CCOV= -fprofile-arcs -ftest-coverage

SRC_C = s21_math.c
SRC_H = s21_math.h
SRC_O = s21_math.o
SRC_A = s21_math.o

SRC = $(SRC_C) $(SRC_H)

OUT_A = libs21math.a
OUT_A_SHORT = -ls21math

SRC_TEST = s21_math_test.c
OUT_TEST = s21_math_test

### GENERALS ###
.PHONY: all clean test gcov_report

all: test gcov_report

clean:
	rm -f *.o *.a *.gch $(OUT_TEST)

### BUILD ###
test: $(SRC_A)  
	$(CC) $(SRC_TEST) -L. $(OUT_A_SHORT) -o $(OUT_TEST)

gcov_report: $(SRC_A)  
	$(CC) $(CCOV) $(SRC_TEST) -L. $(OUT_A_SHORT) -o $(OUT_TEST)

### DEPENDENCIES ###
$(SRC_A): $(SRC_O)
	ar -rcs $(OUT_A) $(SRC_O) 

$(SRC_O): $(SRC)
	$(CC) -O -c $(SRC_C)