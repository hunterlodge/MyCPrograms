CC=gcc
CFLAGS=-I.
$DEPS=

all: 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


clean:
	rm -rf ./*.o ./exe_*
