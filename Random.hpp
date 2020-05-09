#pragma once
#include <random>
#include <iostream>
#include <ctime>
template <typename Engine = std::mt19937>
class Random
{
    public:
        Random() : engine(std::time(nullptr))
            {}

        template <typename T>
        T getNumberInRange(T low,T hight)
        {
            return getNumberInRange<std::uniform_real_distribution<T>,T>(low,hight);
        }

        template <typename Dist,typename T>
        T getNumberInRange(T low,T hight)
        {
            Dist dist(low,hight);
            return dist(engine);
        }

    private:
        Engine engine;
};