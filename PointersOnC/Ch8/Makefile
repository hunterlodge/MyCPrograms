CC=gcc
CFLAGS=-I.
$DEPS=

all: exe_8_7_8_extern_mismatch exe_char_matrix_vs_char_pointer_array exe_8_7_4_test_palindrome exe_8_7_11_multi_dimention_array_types exe_malloc_multi_dimention_array exe_array_of_pointers exe_8_7_10_multi_dimention_array exe_8_7_17_const_array exe_8_7_13_pointerExp2subscriptExp exe_array_name_as_a_param exe_const_str_vs_char_array_initializer 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

exe_8_7_8_extern_mismatch: 8_7_8_extern_mismatch_src1.o 8_7_8_extern_mismatch_src2.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_char_matrix_vs_char_pointer_array: char_matrix_vs_char_pointer_array.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_8_7_4_test_palindrome: 8_7_4_test_palindrome.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_8_7_11_multi_dimention_array_types: 8_7_11_multi_dimention_array_types.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_malloc_multi_dimention_array: malloc_multi_dimention_array.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_array_of_pointers: array_of_pointers.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_8_7_10_multi_dimention_array: 8_7_10_multi_dimention_array.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_8_7_17_const_array: 8_7_17_const_array.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_8_7_13_pointerExp2subscriptExp: 8_7_13_pointerExp2subscriptExp.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_array_name_as_a_param: array_name_as_a_param.o
	$(CC) -o $@ $^ $(CFLAGS)

exe_const_str_vs_char_array_initializer: const_str_vs_char_array_initializer.o
	$(CC) -o $@ $^ $(CFLAGS)


clean:
	rm -rf ./*.o ./exe_*
