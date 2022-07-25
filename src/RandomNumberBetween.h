//Kirk Watson - 47876885 - CS3353
//adopted from https://www.fluentcpp.com/2019/05/24/how-to-fill-a-cpp-collection-with-random-values/
#ifndef INC_21S_PA02_RANDOMNUMBERBETWEEN_H
#define INC_21S_PA02_RANDOMNUMBERBETWEEN_H

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

namespace ranges{
    template<typename Range, typename Generator>
    void generate(Range& range, Generator generator){
        return std::generate(begin(range), end(range), generator);
    }
}
//This class generates a random number between a given range.
class RandomNumberBetween{
public:
    RandomNumberBetween(int low, int high) : random_engine_{std::random_device{}()}, distribution_{low, high}{}
    int operator()(){
        return distribution_(random_engine_);
    }
private:
    std::mt19937 random_engine_;
    std::uniform_int_distribution<int> distribution_;
};

#endif //INC_21S_PA02_RANDOMNUMBERBETWEEN_H
