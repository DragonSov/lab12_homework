#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    // 1)
    char* char_ptr = 0;
    char* char_ptr2 = char_ptr + 1;

    // 2)
    short int* short_ptr = 0;
    short int* short_ptr2 = short_ptr + 1;

    // 3)
    unsigned short int* ushort_ptr = 0;
    unsigned short int* ushort_ptr2 = ushort_ptr + 1;

    // 4)
    int* int_ptr = 0;
    int* int_ptr2 = int_ptr + 1;

    // 5)
    unsigned char* uchar_ptr = 0;
    unsigned char* uchar_ptr2 = uchar_ptr + 1;

    // 6)
    wchar_t* wchar_ptr = 0;
    wchar_t* wchar_ptr2 = wchar_ptr + 1;

    // 7)
    long long int* llong_ptr = 0;
    long long int* llong_ptr2 = llong_ptr + 1;

    // 8)
    size_t* size_t_ptr = 0;
    size_t* size_t_ptr2 = size_t_ptr + 1;

    // 9)
    float* float_ptr = 0;
    float* float_ptr2 = float_ptr + 1;

    // 10)
    double* double_ptr = 0;
    double* double_ptr2 = double_ptr + 1;

    // 11)
    signed int* sint_ptr = 0;
    signed int* sint_ptr2 = sint_ptr + 1;

    printf("1) char: %ld байт\n", (long)(char_ptr2 - char_ptr));
    printf("2) short int: %ld байт\n", (long)(short_ptr2 - short_ptr));
    printf("3) unsigned short int: %ld байт\n", (long)(ushort_ptr2 - ushort_ptr));
    printf("4) int: %ld байт\n", (long)(int_ptr2 - int_ptr));
    printf("5) unsigned char: %ld байт\n", (long)(uchar_ptr2 - uchar_ptr));
    printf("6) wchar_t: %ld байт\n", (long)(wchar_ptr2 - wchar_ptr));
    printf("7) long long int: %ld байт\n", (long)(llong_ptr2 - llong_ptr));
    printf("8) size_t: %ld байт\n", (long)(size_t_ptr2 - size_t_ptr));
    printf("9) float: %ld байт\n", (long)(float_ptr2 - float_ptr));
    printf("10) double: %ld байт\n", (long)(double_ptr2 - double_ptr));
    printf("11) signed int: %ld байт\n", (long)(sint_ptr2 - sint_ptr));

    return 0;
}