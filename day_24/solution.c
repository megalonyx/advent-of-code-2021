#include <stdio.h>
#include <stdint.h>

int64_t digit_14(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0;        // mul x 0
    x = x + z;    // add x z
    x = x % 26;   // mod x 26
    z = z;        // div z 1
    x += 12;   // add x 12
    x = (x == w ? 1 : 0);// eql x w
    x = (x == 0 ? 1 : 0);// eql x 0
    int64_t y = 0;        // mul y 0
    y += 25;      // add y 25
    y *= x;       // mul y x
    y += 1;       // add y 1
    z *= y;       // mul z y
    y = 0;        // mul y 0
    y += w;    // add y w
    y += 6;    // add y 6
    y *= x;    // mul y x
    z += y;    // add z y

    return z;
}


int64_t digit_13(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    z = z;// div z 1
    x += 11; // add x 11
    x = (x == w ? 1 : 0); // eql x w
    x = (x == 0 ? 1 : 0); // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 12; // add y 12
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_12(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    //z = z; // div z 1
    x += 10; // add x 10
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 5; // add y 5
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_11(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    //z = z; // div z 1
    x += 10; // add x 10
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 10; // add y 10
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_10(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    z /= 26; // div z 26
    x -= 16; // add x -16
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 7; // add y 7
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_09(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    //z = z; // div z 1
    x += 14; // add x 14
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 0; // add y 0
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_08(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    //z = z; // div z 1
    x += 12; // add x 12
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 4; // add y 4
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_07(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    z /= 26; // div z 26
    x -= 4; // add x -4
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 12; // add y 12
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_06(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    //z = z; // div z 1
    x += 15; // add x 15
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 14; // add y 14
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_05(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    z /= 26; // div z 26
    x -= 7; // add x -7
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 13; // add y 13
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_04(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    z /= 26; // div z 26
    x -= 8; // add x -8
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 10; // add y 10
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_03(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    z /= 26; // div z 26
    x -= 4; // add x -4
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 11; // add y 11
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_02(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    z /= 26; // div z 26
    x -= 15; // add x -15
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 9; // add y 9
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


int64_t digit_01(int64_t w, int64_t z)
{
    // inp w
    int64_t x = 0; // mul x 0
    x += z; // add x z
    x = x % 26; // mod x 26
    z /= 26; // div z 26
    x -= 8; // add x -8
    x = (x == w ? 0 : 1); // eql x w
                          // eql x 0
    int64_t y = 0; // mul y 0
    y += 25; // add y 25
    y *= x; // mul y x
    y += 1; // add y 1
    z *= y; // mul z y
    y = 0; // mul y 0
    y += w; // add y w
    y += 9; // add y 9
    y *= x; // mul y x
    z += y; // add z y

    return z;
}


void largest() {
    int64_t d14 = 9, d13 = 9, d12 = 9, d11 = 9, d10 = 9, d09 = 9, d08 = 9, d07 = 9, d06 = 9, d05 = 9, d04 = 9, d03 = 9, d02 = 9, d01 = 9;
    for (d14 = 9; d14 >= 1; --d14) {
        int64_t z14 = digit_14(d14, 0);
    for (d13 = 9; d13 >= 1; --d13) {
        int64_t z13 = digit_13(d13, z14);
    for (d12 = 9; d12 >= 1; --d12) {
        int64_t z12 = digit_12(d12, z13);
        printf("Currently at: %ld%ld%ld...........\n", d14, d13, d12);
    for (d11 = 9; d11 >= 1; --d11) {
        int64_t z11 = digit_11(d11, z12);
    for (d10 = 9; d10 >= 1; --d10) {
        int64_t z10 = digit_10(d10, z11);
    for (d09 = 9; d09 >= 1; --d09) {
        int64_t z09 = digit_09(d09, z10);
    for (d08 = 9; d08 >= 1; --d08) {
        int64_t z08 = digit_08(d08, z09);
    for (d07 = 9; d07 >= 1; --d07) {
        int64_t z07 = digit_07(d07, z08);
    for (d06 = 9; d06 >= 1; --d06) {
        int64_t z06 = digit_06(d06, z07);
    for (d05 = 9; d05 >= 1; --d05) {
        int64_t z05 = digit_05(d05, z06);
    for (d04 = 9; d04 >= 1; --d04) {
        int64_t z04 = digit_04(d04, z05);
    for (d03 = 9; d03 >= 1; --d03) {
        int64_t z03 = digit_03(d03, z04);
    for (d02 = 9; d02 >= 1; --d02) {
        int64_t z02 = digit_02(d02, z03);
    for (d01 = 9; d01 >= 1; --d01) {
        int64_t z01 = digit_01(d01, z02);
        if (z01 == 0) {
            printf("Final result: %ld%ld%ld%ld%ld%ld%ld%ld%ld%ld%ld%ld%ld%ld\n", d14, d13, d12, d11, d10, d09, d08, d07, d06, d05, d04, d03, d02, d01);
            return;
        }
    }
    }}}}}}}}}}}}}
}

void smallest() {
    int64_t d14 = 1, d13 = 1, d12 = 1, d11 = 1, d10 = 1, d09 = 1, d08 = 1, d07 = 1, d06 = 1, d05 = 1, d04 = 1, d03 = 1, d02 = 1, d01 = 1;
    for (d14 = 1; d14 <= 9; ++d14) {
        int64_t z14 = digit_14(d14, 0);
    for (d13 = 1; d13 <= 9; ++d13) {
        int64_t z13 = digit_13(d13, z14);
    for (d12 = 1; d12 <= 9; ++d12) {
        int64_t z12 = digit_12(d12, z13);
        printf("Currently at: %ld%ld%ld...........\n", d14, d13, d12);
    for (d11 = 1; d11 <= 9; ++d11) {
        int64_t z11 = digit_11(d11, z12);
    for (d10 = 1; d10 <= 9; ++d10) {
        int64_t z10 = digit_10(d10, z11);
    for (d09 = 1; d09 <= 9; ++d09) {
        int64_t z09 = digit_09(d09, z10);
    for (d08 = 1; d08 <= 9; ++d08) {
        int64_t z08 = digit_08(d08, z09);
    for (d07 = 1; d07 <= 9; ++d07) {
        int64_t z07 = digit_07(d07, z08);
    for (d06 = 1; d06 <= 9; ++d06) {
        int64_t z06 = digit_06(d06, z07);
    for (d05 = 1; d05 <= 9; ++d05) {
        int64_t z05 = digit_05(d05, z06);
    for (d04 = 1; d04 <= 9; ++d04) {
        int64_t z04 = digit_04(d04, z05);
    for (d03 = 1; d03 <= 9; ++d03) {
        int64_t z03 = digit_03(d03, z04);
    for (d02 = 1; d02 <= 9; ++d02) {
        int64_t z02 = digit_02(d02, z03);
    for (d01 = 1; d01 <= 9; ++d01) {
        int64_t z01 = digit_01(d01, z02);
        if (z01 == 0) {
            printf("Final result: %ld%ld%ld%ld%ld%ld%ld%ld%ld%ld%ld%ld%ld%ld\n", d14, d13, d12, d11, d10, d09, d08, d07, d06, d05, d04, d03, d02, d01);
            return;
        }
    }
    }}}}}}}}}}}}}
}

int main(int argc, char *argv[])
{
    printf("Largest number:\n");
    largest();
    printf("\nSmallest number:\n");
    smallest();
    return 0;
}
