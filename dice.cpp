#include<iostream>
#include<random>

int main()
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> D6 (1, 6);

    std::cout<< D6(generator) << std::endl;

}