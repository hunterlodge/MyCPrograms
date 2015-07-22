CC=gcc
CFLAGS=-I.
$DEPS=

all: exe_7_11_4_max_list exe_snowfox_on_fgets exe_7_11_3_ascii_to_integer exe_fibonacci_non_recursive 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

exe_7_11_4_max_list: 7_11_4_max_list.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_snowfox_on_fgets: snowfox_on_fgets.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_7_11_3_ascii_to_integer: 7_11_3_ascii_to_integer.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_fibonacci_non_recursive: fibonacci_non_recursive.o
	$(CC) -o $@ $^ $(CFLAGS)


clean:
	rm -rf ./*.o ./exe_*
