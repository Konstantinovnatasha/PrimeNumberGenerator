#ifndef PRIME_GEN_H
#define PRIME_GEN_H

class PrimeNumberGenerator {
 private:
  int num;
  bool prostoNumer(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i <= n/2; ++i) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }
 public:
  explicit PrimeNumberGenerator(int start): num(start - 1) {}
  int GetNextPrime() {
    while (prostoNumer(++num) == 0) {}
    return num;
  }
};

#endif