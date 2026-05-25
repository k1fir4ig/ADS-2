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
    double total_sum = 1.0;
    double current_item = 1.0;

    for (uint16_t step = 1; step < count; ++step) {
        current_item *= (x / step);
        total_sum += current_item;
    }
    return total_sum;
}

double sinn(double x, uint16_t count) {
    double total_sum = x;
    double current_item = x;
    double x_squared = x * x;

    for (uint16_t step = 1; step < count; ++step) {
        current_item *= (-x_squared) / ((2 * step) * (2 * step + 1));
        total_sum += current_item;
    }
    return total_sum;
}

double cosn(double x, uint16_t count) {
    double total_sum = 1.0;
    double current_item = 1.0;
    double x_squared = x * x;

    for (uint16_t step = 1; step < count; ++step) {
        current_item *= (-x_squared) / ((2 * step - 1) * (2 * step));
        total_sum += current_item;
    }
    return total_sum;
}
