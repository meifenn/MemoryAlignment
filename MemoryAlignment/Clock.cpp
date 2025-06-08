#include "Clock.hpp"
#include <iostream>

namespace MEI
{
    Clock::Clock() :start_time(std::chrono::high_resolution_clock::now())
    {
    }

    void Clock::start()
    {
        start_time = std::chrono::high_resolution_clock::now();
    }

    long long Clock::elapsed() const
    {
        auto current_time = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<milli>(current_time - start_time).count();
    }

    void Clock::print_elapsed() const
    {
        std::cout << this->elapsed() << std::endl;
    }
    Clock::~Clock()
    {
        print_elapsed();
    }
}