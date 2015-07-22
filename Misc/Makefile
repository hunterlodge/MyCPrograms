CC=gcc
CFLAGS=-I.
$DEPS=

all: exe_scanf exe_bitwise exe_testRange exe_sizeof exe_const_ptr exe_reverse_bits exe_const exe_specialEcho exe_testInc exe_exe_func_before_main 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

exe_scanf: scanf.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_bitwise: bitwise.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_testRange: testRange.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_sizeof: sizeof.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_const_ptr: const_ptr.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_reverse_bits: reverse_bits.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_const: const.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_specialEcho: specialEcho.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_testInc: testInc.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_exe_func_before_main: exe_func_before_main.o
	$(CC) -o $@ $^ $(CFLAGS)


clean:
	rm -rf ./*.o ./exe_*
