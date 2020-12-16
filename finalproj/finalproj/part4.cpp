#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"
#include <functional>
#include <numeric>


bool anyPrime(const std::vector<int>& values);

int main() {
    auto integers = randomIntegers();
    std::cout << "Integers: " << integers << "\n";
    std::cout << "Are there any primes? " << (anyPrime(integers) ? "yes" : "no") << "\n";
}

bool anyPrime(const std::vector<int>& values) {


    for (auto i : values) {
        for (int j = 2; j < std::sqrt(i) + 1; ++j)
            if (i % j == 0){
                auto truth = true;
                return truth;

            }
            else {
                auto result = false;

                return result;
            }
        }
    }

