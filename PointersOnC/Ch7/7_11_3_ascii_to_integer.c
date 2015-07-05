#include<stdio.h>
#include<string.h>

int ascii_to_integer( char* str);
void getLineByfgets(char* buf, int size);
void getLineByscanf(char* buf, int size);

int
main()
{
    char buffer[5] = "abcd";
    int buf_size = sizeof(buffer);
    printf ("buffer size: %d\n", buf_size);
    getLineByfgets(buffer, buf_size);
    //getLineByscanf(buffer, buf_size);

    printf ("convert %s to integer: %d\n", buffer, ascii_to_integer(buffer));

}

void 
getLineByscanf(char* buf, int size)
{

    char format[4];
    sprintf(format, "%%%ds", size);
    printf ("%s \n", format);
    printf ("please input: ");
    scanf (format, buf); 
}


/*
 * 无论输入如何，fgets都保证buf的最后一个字符是'\0'
 * 但是，如果输入字符少于size - 1, 则换行符也会放入buffer中
 * 如果等于size - 1, 则刚好把所有字符放入buffer中
 * 如果大于size - 1, 则截断，仅放入size - 1个字符
 * 因此如果要避免buf中含有\n，则要在fgets后进行判断
 * 注意: scanf没有这个问题，\n不会被放入buffer
 */
void 
getLineByfgets(char* buf, int size)
{
    printf ("please input %d chars:", size - 1); //fgets只会往buffer中放size - 1个有效字符
    fgets (buf, size, stdin); 

    if (buf[strlen(buf) - 1] == '\n')
    {
        buf[strlen(buf) - 1] = '\0';
    }
}

int ascii_to_integer (char *str)
{
    char * p = str;

    int i = 0;
    while (*p != '\0')
    {
        char c = *p;
        int x = c - '0';
        if (x > 9 || x < 0)
        {
            printf ("invalid input!!!\n");
            return 0;
        }
        i = i * 10 + x;
        p++;

    }
    return i;
}
        
            
