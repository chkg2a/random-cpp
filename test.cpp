#include <iostream>
#include <format>
#include <chrono>
int main()
{
    const auto now = std::chrono::system_clock::now();
    std::cout << std::format("{:%Y}", now); // => 2021
}
