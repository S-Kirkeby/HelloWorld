#include<iostream>
#include<vector>
#include<random>

void aleaIactaEst(std::vector<int> &TerningeKast)
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int>D6(1, 6);

    int kast = D6(generator);

    TerningeKast.push_back(kast);

}

int main()
{
    std::vector<int> TerningeKast;

    aleaIactaEst(TerningeKast);
    aleaIactaEst(TerningeKast);
    aleaIactaEst(TerningeKast);
    aleaIactaEst(TerningeKast);
    aleaIactaEst(TerningeKast);

    for(int tal : TerningeKast)
    {
        std::cout<< tal << std::endl;
    }

    std::cout << TerningeKast.back() << std::endl; 
}
