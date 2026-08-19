#include<iostream>
#include<string>
#include<vector>

int main()
{
    std::vector<std::string>fridge = {"mælk", "smør", "ost", "æg", "yoghurt"};

    for(int i = 0; i < fridge.size(); i++)

    {
        std::cout<<fridge[i]<<std::endl;
    }

    std::cout<<" "<<std::endl;
    std::cout<<"Der er " << fridge.size() << " varer i køleskabet"<<std::endl;
    
    fridge.push_back("øl");
    fridge.push_back("ketchup");
    std::cout<<" "<<std::endl;

    for(int i = 0; i < fridge.size(); i++)
    {
        std::cout<<fridge[i]<<std::endl;
    }

    std::cout<<"Der er nu "<< fridge.size() << " varer i køleskabet"<<std::endl;
}
