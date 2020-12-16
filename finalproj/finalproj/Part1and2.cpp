#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"
#include <functional>

int main() {

    auto cars = randomCars();
    std::cout << "Initial: " << cars << "\n";

    std::reverse(cars.begin(), cars.end());

    std::cout << "Reversed: " << cars << "\n";

    auto integers = randomIntegers();
    auto ibot = integers;
    std::cout << "Initial: " << integers << "\n";


    std::sort(std::begin(integers), std::end(integers));
    std::sort(std::begin(ibot), std::end(ibot), std::greater<int>());
    std::cout << "Bitonic: " << integers << ibot << "\n";
}
