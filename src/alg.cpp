// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
    double result = 1.0;
    for (uint16_t index = 0; index < n; ++index) {
        result *= value;
    }
    return result;
}

uint64_t fact(uint16_t n) {
    uint64_t factorial = 1;
    for (uint16_t index = 2; index <= n; ++index) {
        factorial *= index;
    }
    return factorial;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / static_cast<double>(fact(n));
}

double expn(double x, uint16_t count) {
    double total_sum = 0.0;
    for (uint16_t i = 0; i <= count; ++i) {
        total_sum += calcItem(x, i);
    }
    return total_sum;
}

double sinn(double x, uint16_t count) {
    double total_sum = 0.0;
    for (uint16_t i = 1; i <= count; ++i) {
        double sign = pown(-1.0, i - 1);
        uint16_t power = 2 * i - 1;
        total_sum += sign * calcItem(x, power);
    }
    return total_sum;
}

double cosn(double x, uint16_t count) {
    double total_sum = 0.0;
    for (uint16_t i = 1; i <= count; ++i) {
        double sign = pown(-1.0, i - 1);
        uint16_t power = 2 * i - 2;
        total_sum += sign * calcItem(x, power);
    }
    return total_sum;
}
