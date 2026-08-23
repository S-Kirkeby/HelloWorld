#include<iostream>
#include<random>


int main()
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> D6 (1, 6);

    int valg = 0;
    bool shakingTheDiceCup = true;
    
    std::cout<<" ********** THE DICE GAME **********" << std::endl;
    std::cout<<" " << std::endl;
    std::cout<<" " << std::endl;
    std::cout<<" Please press 1 to throw the die " << std::endl;
    std::cout<<" " << std::endl;
    std::cout<<" Press 2 to quit " << std::endl;

    while(shakingTheDiceCup == true)
    {   
        
        if (std::cin.fail()) //tester om input kan læses som 'int' eller ej
        {
            std::cout << "ugyldig indtastning, brug kun heltal (1 eller 2)" << std::endl;
            std::cin.clear();  // returnerer fejltilstand til normaltilstand 
            std::cin.ignore(100, '\n'); // ignorerer de første 100 tegn eller return 
            continue; //restart while loop
        }
        
        std::cin>> valg;
        if(valg == 1)
        {
            std::cout<< "Terningen viser: " << D6(generator)<< "." << std::endl;        
        }

        else if(valg == 2)
        {  
            shakingTheDiceCup = false;
            std::cout<< "Tak for spil"<< std::endl;
        }

        else
        {
            std::cout<< "ugyldigt input tryk venligst kun 1 eller 2" <<std::endl;
            valg = 0;
        }
    }
}