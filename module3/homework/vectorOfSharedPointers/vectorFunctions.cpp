#include "vectorFunctions.hpp"

#include <iostream>

std::vector<std::shared_ptr<int>> generate(const int count)  // która wygeneruje wektor współdzielonych wskaźników na liczby od 0 do count
{
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (size_t i = 0; i < count; ++i) {
        vec.emplace_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec)  //która wypisze wszystkie elementy ze wskaźników wektora
{
    for (const auto& element : vec) {
        std::cout << *element << '\n';
    }
}
