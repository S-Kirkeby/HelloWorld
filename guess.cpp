#include <iostream>
#include <random>

void visForsøg(int numberOfGuesses)
{
    std::cout << "du har brugt " << numberOfGuesses << " forsøg" << std::endl;
}

void visAntalAfForsøg(int maxGuesses, int numberOfGuesses)
{
    std::cout << "Du har " << maxGuesses - numberOfGuesses << " forsøg tilbage" << std::endl;
    std::cout << "prøv igen" << std::endl;
}

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> destrib(1, 100);

    int secretNumber = destrib(gen);
    int guess;
    int numberOfGuesses = 0;
    int const maxGuesses = 3;


    std::cout << "Gæt det tal, jeg tænker på. Du har " << maxGuesses << " forsøg ..." << std::endl;
   
    
    while (numberOfGuesses < maxGuesses)
   
    {
        std::cin >> guess;
        if (std::cin.fail())
        {
            std::cout << '\a';
            std::cout << "ugyldig indtastning, kalder functionen clear efterfulgt af ignore" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        numberOfGuesses++;
        
        visForsøg(numberOfGuesses);

        if (guess == secretNumber)
        {
            std::cout << "Tillykke du har gættet rigtigt! tallet var "<< secretNumber << std::endl;
            return 0;
        }

        else if (guess < secretNumber)
        {
            std::cout << "For lavt" << std::endl; 
                if (numberOfGuesses <= (maxGuesses-1))
                {
                  visAntalAfForsøg(maxGuesses, numberOfGuesses);                  
                }
        }       
             
        else
        {
            std::cout << "For højt" << std::endl;  
                if (numberOfGuesses <= (maxGuesses-1))
                {
                    visAntalAfForsøg(maxGuesses, numberOfGuesses);
                }
        }
    }
    std::cout << "æv! du tabte! " << "Det hemmelige tal var: " << secretNumber << std::endl;
}
