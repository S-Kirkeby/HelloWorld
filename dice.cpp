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

void visMenu()
{

    std::cout<<" ********** THE DICE GAME **********" <<std::endl;
    std::cout<<" *                                 *" <<std::endl;
    std::cout<<" *                                 *" <<std::endl;
    std::cout<<" * Press 1 to 'Throw the die'      *" <<std::endl;
    std::cout<<" *                                 *" <<std::endl;
    std::cout<<" * Press 2 to 'Quit'               *" << std::endl;
    std::cout<<" *                                 *" <<std::endl;
    std::cout<<" * Press 9 for 'Testmode'          *" <<std::endl;
    std::cout<<" *                                 *" <<std::endl;
    std::cout<<" *                                 *" <<std::endl;
    std::cout<<" ***********************************" <<std::endl;

}

void aleaIactaEst(std::vector<int> &TerningeKast)
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> D6 (1, 6);

    int kast = D6(generator);

    TerningeKast.push_back(kast);
}

bool validation(int& valg)
{
    std::cin>>valg;
    if(std::cin.fail())
        {
            std::cout<< "ugyldig indtastning, brug kun heltal (1 eller 2)" <<std::endl;
            std::cin.clear(); 
            std::cin.ignore(100, '\n');
            return false;
        }
    return true;
}

bool testModeTwo(std::vector<int>& TerningeKast)
{
    bool kørTest = true;
    bool erEtParKørt = false;
    bool erTreEnsKørt = false; 

    while(kørTest ==true)
    {
        int valg = 0;
        int kast = 0;

        TerningeKast.clear();
        std::cout<< "Du er nu i 'Testmode'. Indtast resultater af dine kast" <<std::endl;
                
        std::cout<< "kast 1: " <<std::endl;
        std::cin>> kast;
        TerningeKast.push_back(kast);

        std::cout<< "kast 2: " <<std::endl;
        std::cin>> kast;
        TerningeKast.push_back(kast);
               
        std::cout<< "kast 3: " <<std::endl;
        std::cin>> kast;
        TerningeKast.push_back(kast);

        if(erEtPar(TerningeKast[0], TerningeKast[1], TerningeKast[2]))
        {
            std::cout<< "Du har fået 'Et par'" <<std::endl;
            erEtParKørt = true;
        }
                
        if(erTreEns(TerningeKast[0], TerningeKast[1], TerningeKast[2]))
        {
            std::cout<< "Du har fået 'Tre ens" <<std::endl;
            erTreEnsKørt = true;
        }

        std::cout<< "vil du teste igen?"<< std::endl;
        std::cout<< "1 for Ja"<< std::endl;
        std::cout<< "2 for Nej"<< std::endl;
        
        std::cin>>valg;

        if(valg == 2)
        {
            std::cout<< "Test afsluttet" << std::endl;
            valg = 0;
            TerningeKast.clear();

        if(erEtParKørt && erTreEnsKørt)
        {
            return true;
        }
        if(erEtParKørt && !erTreEnsKørt || !erEtParKørt && erTreEnsKørt)
        {   
            return false;
        }
        if(!erEtParKørt && !erTreEnsKørt)
        {   
            return false;
        }
            kørTest=false;
        }
    }
    return false;
}

int main()
{
    int valg = 0;
    int antalKast = 0;
    int point = 0;
    int kast = 0;
      
    bool Testmode = false;
    bool shakingTheDiceCup = true;

    std::vector<int> TerningeKast;
    
    while(shakingTheDiceCup == true)
    {   
        visMenu();
        if (!validation(valg))
        {
            continue; //Stopper og kører fra starten af While-løkken igen og modtager et nyt input fra brugere
        }

        if(valg == 9)
        {
            bool testResultat = testModeTwo(TerningeKast);
            
            if(testResultat)
            {
                std::cout<< "Begge test er gennemført" <<std::endl;
            }
            else
            {
                std::cout<< "Kun dele af testen er gennemført" <<std::endl;
            }
        }   
                
        if(valg == 1)
        {
            aleaIactaEst(TerningeKast);

            kast = TerningeKast.back();
            std::cout<< "Terningen viser: " << kast << "." << std::endl; 
            antalKast++;
       
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
            std::cout<< "Forkert menuvalg. 1 for spil, 2 for afslut 9, for testmode" <<std::endl;
            valg = 0;
        }
    }
}