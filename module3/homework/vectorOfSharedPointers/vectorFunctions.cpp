#include "vectorFunctions.hpp"

#include <iostream>

VectorSPtr generate(int count) {
    VectorSPtr vec;
    vec.reserve(count);
    for (size_t i = 0; i < count; ++i) {
        vec.emplace_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const VectorSPtr& vec) {
    for (const auto& element : vec) {
        std::cout << *element << '\n';
    }
}

void add10(const VectorSPtr& vec) {
    for (auto& pItem : vec) {
        if (pItem) {
            *pItem += 10;
        }
    }
}

void sub10(int* const pItem) {
    if (pItem) {
        *pItem -= 10;
    }
}

void sub10(const VectorSPtr& vec) {
    for (auto& pItem : vec) {
        sub10(pItem.get());
    }
}