#include<iostream>
#include<random>
#include<vector>

bool erEtPar(int a, int b, int c)
{
return ( a == b && a != c ||
         a == c && a != b || 
         b == c && b != a);
}

bool erTreEns(int a, int b, int c)
{
    return (a==b && a == c);
}

void aleaIactaEst(std::vector<int> &TerningeKast)
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> D6 (1, 6);

    int kast = D6(generator);

    TerningeKast.push_back(kast);
}

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
    
    bool Testmode = false;
    bool shakingTheDiceCup = true;

    std::vector<int> TerningeKast;
    
    std::cout<<" ********** THE DICE GAME **********" <<std::endl;
    std::cout<<" " <<std::endl;
    std::cout<<" " <<std::endl;
    std::cout<<" Please press 1 to 'Throw the die' " <<std::endl;
    std::cout<<" " <<std::endl;
    std::cout<<" Press 2 to 'Quit' " << std::endl;
    std::cout<<" " <<std::endl;
    std::cout<<" Press 9 for 'Testmode'" <<std::endl;
    
    while(shakingTheDiceCup == true)
    {   
        
        std::cin>> valg;
        if (std::cin.fail()) //tester om input kan læses som 'int' eller ej
        {
            std::cout<< "ugyldig indtastning, brug kun heltal (1 eller 2)" <<std::endl;
            std::cin.clear();  // returnerer fejltilstand til normaltilstand 
            std::cin.ignore(100, '\n'); // ignorerer de første 100 tegn eller til hit return 
            continue; //restart while loop
        }

        
        if(valg == 9)
        {
            Testmode = true;
            while(Testmode == true)
            {
                std::cout<< "Du er nu i 'Testmode'. Indtast resultater af dine kast" <<std::endl;
                
                std::cout<< "kast 1: " <<std::endl;
                std::cin>> kastEt;
                std::cout<< "kast 2: " <<std::endl;
                std::cin>> kastTo;
                std::cout<< "kast 3: " <<std::endl;
                std::cin>> kastTre;

                if(erEtPar(kastEt, kastTo, kastTre))
                {
                    std::cout<< "Du har fået 'Et par'" <<std::endl;
                }
                
                if(erTreEns(kastEt, kastTo, kastTre))
                {
                    std::cout<< "Du har fået 'Tre ens" <<std::endl;
                }

                std::cout<< "Vil du teste igen? " <<std::endl;
                std::cout<< "tast 1 for ja " <<std::endl;
                std::cout<< "tast 2 for nej " <<std::endl;

                std::cin>>valg;

                if(valg == 2)
                {
                    Testmode = false;
                }
            }
        
        }
        
        if(valg == 1)
        {

            aleaIactaEst(TerningeKast);
         

            kast = TerningeKast.back();
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

            point = 0;

            for(int i = 0; i < TerningeKast.size(); i++)
            {
                point += TerningeKast[i];
            }

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

                std::cout<< "Første kast "<< TerningeKast[0] << std::endl;
                std::cout<< "Andet kast "<< TerningeKast[1] << std::endl;
                std::cout<< "Tredje kast "<< TerningeKast[2] << std::endl;

                if(erEtPar(TerningeKast[0], TerningeKast[1], TerningeKast[2]))
                {
                    std::cout<< "Du har slået et par" << std::endl;
                    Testmode = false;
                }
          
                if(erTreEns(TerningeKast[0], TerningeKast[1], TerningeKast[2]))
                {
                    std::cout << "Du har slået 'Tre Ens' eller 'Et Par'" << std::endl;
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