#include<stdio.h>
#include<limits.h>
#include<float.h>


int main()
{
    printf("char range: %d, %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("int range: %d, %d\n", INT_MIN, INT_MAX);
    printf("short range: %d, %d\n", SHRT_MIN, SHRT_MAX);
    printf("long range: %ld, %ld\n", LONG_MIN, LONG_MAX);
    printf("float range: %f, %f\n", FLT_MIN, FLT_MAX);
    printf("double range: %f, %f\n", DBL_MIN, DBL_MAX);
    printf("long double range: %Lf, %Lf\n", LDBL_MIN, LDBL_MAX);

    // long l = SHRT_MAX + 1;
    // long l = LONG_MAX + 1;
    long l = LONG_MAX;
    short s = l;

    printf("%ld, %d\n", l, s);


    double d = FLT_MAX + 1;
    float f = d;

    printf("%f, %f\n", d, f);
}
