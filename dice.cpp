#include<iostream>
#include<random>

int main()
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> D6 (1, 6);

    int valg = 0;
    int antalKast = 0;
    int point = 0;
    int kast = 0;
   
    int kastEt = 0;
    int kastTo = 0;
    int kastTre = 0;
    
    
    bool shakingTheDiceCup = true;
    
    std::cout<<" ********** THE DICE GAME **********" << std::endl;
    std::cout<<" " << std::endl;
    std::cout<<" " << std::endl;
    std::cout<<" Please press 1 to throw the die " << std::endl;
    std::cout<<" " << std::endl;
    std::cout<<" Press 2 to quit " << std::endl;
    
    while(shakingTheDiceCup == true)
    {   
        
        std::cin>> valg;
        if (std::cin.fail()) //tester om input kan læses som 'int' eller ej
        {
            std::cout << "ugyldig indtastning, brug kun heltal (1 eller 2)" << std::endl;
            std::cin.clear();  // returnerer fejltilstand til normaltilstand 
            std::cin.ignore(100, '\n'); // ignorerer de første 100 tegn eller return 
            continue; //restart while loop
        }
        
        if(valg == 1)
        {
            kast = D6(generator);
            std::cout<< "Terningen viser: " << kast << "." << std::endl; 
            antalKast++;
       
            if(antalKast == 1)
            {
                kastEt = kast;
            }
            if(antalKast == 2)
            {
                kastTo = kast;
            }
            if(antalKast == 3)
            {
                kastTre = kast;
            }

            point = kastEt + kastTo + kastTre;

            if(antalKast < 3)
            {
                std::cout<< "Du har brugt " << antalKast << " kast" << std::endl;
                std::cout<< "Du har " << point << " point" << std::endl;
            }

            else
            {
                shakingTheDiceCup = false;
                std::cout << "Du har brugt alle dine kast" << std::endl;
                std::cout << "Du fik " <<point<< " point i alt" << std::endl;
                std::cout << "Tak for spil" << std::endl;
            }

            if(antalKast == 3)
            {
                if(kastEt == kastTo && kastEt != kastTre || kastEt == kastTre && kastEt != kastTo || kastTo == kastTre && kastTo != kastEt)
                {
                    std::cout<< "Du har slået et par" << std::endl;
                }
          
                if(kastEt == kastTo && kastTo == kastTre)
                {
                    std::cout << "Du har slået tre ens!" << std::endl;
                }
            }
        }

        else if(valg == 2) //Afslutning af spillet
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