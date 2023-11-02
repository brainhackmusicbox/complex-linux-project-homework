CFLAGS = -Wall -Werror -Wextra

# list of source files to build libcalc
CALC_SRC_DIR = calc_src
LIBCALC_SRC = $(CALC_SRC_DIR)/add.c \
			$(CALC_SRC_DIR)/subtract.c \
			$(CALC_SRC_DIR)/multiply.c \
			$(CALC_SRC_DIR)/divide.c \
			$(CALC_SRC_DIR)/factorial.c \
			$(CALC_SRC_DIR)/sqrt.c
LIBCALC_OBJ = add.o \
			subtract.o \
			multiply.o \
			divide.o \
			factorial.o \
			sqrt.o

FORMATTER_DIR = formatter_src
LIBCONVERT_SRC = $(FORMATTER_DIR)/upper.c \
				$(FORMATTER_DIR)/lower.c
LIBCONVERT_OBJ = upper.o lower.o

all: build-calc link-calc build-formatter link-formatter

build-calc:
	# build libcalc as static lib 
	gcc $(CFLAGS) -c $(LIBCALC_SRC)

link-calc:
	# statically link libcalc.a to main program
	ar -rc libcalc.a $(LIBCALC_OBJ)
	ranlib libcalc.a
	gcc $(CALC_SRC_DIR)/main.c -L . -l calc -o calc -lm

build-formatter:
	# build shared library libconvert.so 
	gcc $(CFLAGS) -fpic -c $(LIBCONVERT_SRC)
	gcc -shared -o libconvert.so $(LIBCONVERT_OBJ)

link-formatter:
	# dyamically link main program to libconvert.so 
	gcc $(FORMATTER_DIR)/main.c -o formatter -L . -l convert
	sudo cp ./libconvert.so /usr/lib
	sudo chmod 0755 /usr/lib/libconvert.so
	sudo ldconfig

clean:
	#clean all objects and executables in working directory
	rm -f *.o *.so *.a ./calc ./formatter

	# remove shared library from /usr/lib
	sudo rm -f /usr/lib/libconvert.so
