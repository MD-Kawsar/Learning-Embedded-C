#include<stdint.h>
#include<stdio.h>

int main(){
    int a1 = 1;
    int8_t a2 = 2;
    int16_t a3 = 3;
    int32_t a4 = 4;
    int64_t a5 = 5;

    char c1 = 'A';

    float f1 = 1.23;
    double d1 = 4.56;

    printf("Address of a1 = %p.\n", &a1);
    printf("Address of a2 = %p.\n", &a2);
    printf("Address of a3 = %p.\n", &a3);
    printf("Address of a4 = %p.\n", &a4);
    printf("Address of a5 = %p.\n", &a5);
    printf("Address of c1 = %p.\n", &c1);
    printf("Address of f1 = %p.\n", &f1);
    printf("Address of d1 = %p.\n", &d1);

    return 0;
}