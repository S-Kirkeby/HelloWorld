#include<iostream>
#include<vector>

int main()
{
    std::vector<int>talrække;

    talrække.push_back(9);
    talrække.push_back(5);
    talrække.push_back(366);
    talrække.push_back(81);
    talrække.push_back(7452);
    talrække.push_back(63);
    talrække.push_back(42);  

    std::cout<< "Og hele rækken på en gang:" << std::endl;

    for(int i = 0; i < talrække.size(); i++)
    {
        std::cout<<talrække[i]<< std::endl;
    }

    std::vector<int>ædelsten = {32, 34,67,432,45,3,2224,1};

    for(int i = 0; i < ædelsten.size(); i++)
    {
    std::cout<<ædelsten[i]<< std::endl;
    }
    ædelsten.erase(ædelsten.begin()+3); //sletter tallet på index 0+3 = 3 som er: 432

    std::cout<<"Ny måde at gennemløbe en for løkke på: " <<std::endl;

    for(int tal : ædelsten)
    {
        std::cout<<tal<< std::endl;
    };
}
