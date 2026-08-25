#include<iostream>
#include<random>

int aleaIactaEst(std::mt19937 &generator)
{
    std::uniform_int_distribution<int> D6 (1, 6);

    int kast = D6(generator);
    return kast;
}


int point(int a, int b, int c)
{
    int resultat = a + b + c;
    return resultat;
}

int main()
{
    std::random_device rd;
    std::mt19937 generator(rd());

    int kast1 = aleaIactaEst(generator);
    int kast2 = aleaIactaEst(generator);
    int kast3 = aleaIactaEst(generator);

    std::cout<< "Kast 1: " << kast1 << " Kast 2: " << kast2 << " Kast 3: " << kast3 << std::endl;
    std::cout<< point(kast1, kast2, kast3) << std::endl;
}