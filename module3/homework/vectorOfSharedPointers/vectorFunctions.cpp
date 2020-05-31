#include <iostream>
#include <memory>
#include <vector>

#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(const int count) // która wygeneruje wektor współdzielonych wskaźników na liczby od 0 do count
{
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (size_t i = 0; i < count; ++i)
    {
        vec.emplace_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>> &vec) //która wypisze wszystkie elementy ze wskaźników wektora
{
    for (const auto &element : vec)
    {
        std::cout << *element << '\n';
    }
}
void add10(std::vector<std::shared_ptr<int>> &vec) //która przyjmie wektor i doda do każdej liczby 10
{
    for (auto &element : vec)
    {
        if (element)
        {
            *element += 10;
        }
    }
}
void sub10(int *const ptr) //która przyjmie stały wskaźnik na int i odejmie od tego elementu 10
{
    if (ptr)
    {
        *ptr -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> &vec) //Która przyjmie wektor współdzielonych wskaźników i wywoła dla każdego elementu powyższe przeciążenie funkcji sub10()
{
    for (auto &element : vec)
    {
        sub10(element.get());
    }
}
