#include<iostream>

int main()
{
    int x = 7;

    
        if(x > 5) //Mulighed/valg nr 1
        {
            std::cout << "Tallet x er større end 5 " << std::endl;
            std::cout << "Programmet afsluttes inde i mulighed nr 1" << std::endl;
            return 0;
        }

        else if(x < 5) //Mulighed/valg nr 2
        {
            std::cout << "Tallet x er mindre end 5" << std::endl;
            std::cout << "Programmet afsluttes i mulighed nr 2" << std::endl;
            return 0;
        }
        else //Mulighed/valg nr 3
        {
            std::cout << "Tallet er præcis 5!" << std::endl;
            std::cout << "Programmet afsluttes i mulighed nr 3" << std::endl;
            return 0;
        }
    std::cout << "Programmet afslutter uden at kører if/else, da betingelserne ikke blev opfyldt er programmet sprunget over valgmulighederne" << std::endl;
}