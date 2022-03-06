// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
double znach = 1;
if (n == 0) {
return znach;
} else {
for (int i = 1; i <= n; i++) {
znach = value * znach;
}
}
return znach;
}
uint64_t fact(uint16_t n) {
if (n <= 1)
return 1;
else
return n * fact(n - 1);
}
double calcItem(double x, uint16_t n) {
double znach;
znach = pown(x, n) / fact(n);
return znach;
}
double expn(double x, uint16_t count) {
double znach = 0;
for (int i = 0; i <= count; i++) {
znach += calcItem(x, i);
}
return znach;
}
double sinn(double x, uint16_t count) {
double znach = 0;
for (int i = 1; i <= count; i++) {
znach += pown(-1.0, (i - 1)) * calcItem(x, (2 * i - 1));
}
return znach;
}
double cosn(double x, uint16_t count) {
double znach = 0;
for (int i = 1; i <= count; i++) {
znach += pown(-1.0, (i - 1)) * calcItem(x, (2 * i - 2));
}
return znach;
}
