#include<stdint.h>
#include<stdio.h>

int main(){
    int i1 = 1;
    int i11 = 11;

    int8_t i2 = 2;
    int8_t i22 = 22;

    int16_t i3 = 3;
    int16_t i33 = 33;

    int32_t i4 = 4;
    int32_t i44 = 44;
    
    int64_t i5 = 5;
    int64_t i55 = 55;

    char c1 = 'A';
    char c2 = 'B';
    char c3 = 'C';

    float f1 = 1.23;
    float f2 = 2.34;
    float f3 = 3.45;

    double d1 = 4.56;
    double d2 = 5.67;
    double d3 = 6.78;

    printf("Address of i1 = %p.\n", &i1);
    printf("Address of i11 = %p.\n", &i11);
    printf("Address of i2 = %p.\n", &i2);
    printf("Address of i22 = %p.\n", &i22);
    printf("Address of i3 = %p.\n", &i3);
    printf("Address of i33 = %p.\n", &i33);
    printf("Address of i4 = %p.\n", &i4);
    printf("Address of i44 = %p.\n", &i44);
    printf("Address of i5 = %p.\n", &i5);
    printf("Address of i55 = %p.\n", &i55);
    printf("Address of c1 = %p.\n", &c1);
    printf("Address of c2 = %p.\n", &c2);
    printf("Address of c3 = %p.\n", &c3);
    printf("Address of f1 = %p.\n", &f1);
    printf("Address of f2 = %p.\n", &f2);
    printf("Address of f3 = %p.\n", &f3);
    printf("Address of d1 = %p.\n", &d1);
    printf("Address of d2 = %p.\n", &d2);
    printf("Address of d3 = %p.\n", &d3);

    return 0;
}