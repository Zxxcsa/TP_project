#pragma once
#include "credit.h"

Credit::Credit(double x1, size_t x2, size_t x3, double x4, double x5) : Account(x1, x2, x3) {
  limit = x4;
  commision = x5;
}