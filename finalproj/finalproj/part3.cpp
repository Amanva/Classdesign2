#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"
#include <functional>
#include <numeric>
#include <iomanip>


int main() {

    
    auto cars = randomCars();
    
    std::cout << "Cars: " << cars << "\n";
    double result = 0;
    for (auto i : cars) {
        std::vector<double> v = { i.price() };
        for (auto element : v)
          result += element/ cars.size();
 
 
    }
    std::cout << "The average price is: $" << result << "\n";
    
    std::sort(cars.begin(), cars.end(), [&](const Car& a, const Car& b) {
            return a.price() < b.price();
        });
    double max = 0;
    double min = 0;
   
    for (auto h : cars) {
        max = h.price();
             
    }
    
    std::sort(cars.begin(), cars.end(), [&](const Car& c, const Car& d) {
        return c.price() > d.price();
        });
    for (auto g : cars) {
        min = g.price();

    }

    std::cout << "The range is: $" << min <<"-$" << max << "\n";
}
